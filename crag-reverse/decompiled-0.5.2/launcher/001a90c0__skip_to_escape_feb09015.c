// 001a90c0 skip_to_escape

/* <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape */

void __rustcall
<serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 != uVar6) {
    if (uVar6 <= uVar2) {
      (*(code *)PTR_panic_bounds_check_0021a020)
                (param_4,&
                         PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216c48
                );
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar1 = *(byte *)(*param_1 + uVar2);
    if (((bVar1 != 0x22) && (bVar1 != 0x5c)) && (0x1f < bVar1)) {
      uVar6 = uVar6 - (uVar2 + 1);
      lVar7 = 7 - uVar2;
      lVar5 = 1;
      do {
        if (lVar5 - (uVar6 & 0x7ffffffffffffff8) == 1) {
          param_1[2] = (uVar6 & 0xfffffffffffffff8) + uVar2 + 1;
          skip_to_escape_slow();
          return;
        }
        uVar8 = *(ulonglong *)(*param_1 + uVar2 + lVar5);
        lVar5 = lVar5 + 8;
        lVar7 = lVar7 + -8;
        uVar8 = ((uVar8 ^ 0x5c5c5c5c5c5c5c5c) + 0xfefefefefefefeff |
                (uVar8 ^ 0x2222222222222222) + 0xfefefefefefefeff | uVar8 + 0xdfdfdfdfdfdfdfe0) &
                ~uVar8 & 0x8080808080808080;
      } while (uVar8 == 0);
      uVar4 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
        uVar4 = uVar4 + 1;
      }
      param_1[2] = (ulonglong)(uVar4 >> 3) - lVar7;
    }
  }
  return;
}


