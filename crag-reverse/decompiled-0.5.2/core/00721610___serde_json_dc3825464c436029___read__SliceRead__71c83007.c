// 00721610 <serde_json[dc3825464c436029]::read::SliceRead>

/* serde_json[dc3825464c436029]::read::parse_escape::<serde_json[dc3825464c436029]::read::SliceRead>
    */

undefined8 __rustcall
serde_json[dc3825464c436029]::read::parse_escape::<serde_json[dc3825464c436029]::read::SliceRead>
          (longlong *param_1,undefined1 param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar3 < uVar2) {
    uVar1 = *(undefined1 *)(*param_1 + uVar3);
    param_1[2] = uVar3 + 1;
    switch(uVar1) {
    case 0x22:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 0x22;
      break;
    default:
      if (uVar2 <= uVar3) {
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302);
        goto LAB_00721859;
      }
      (**(code **)PTR_FN_0079ab30)(&switchD_00721659::switchdataD_001b9510,*param_1 + uVar3 + 1);
      (**(code **)PTR_FN_0079ab38)();
      goto LAB_00721828;
    case 0x2f:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 0x2f;
      break;
    case 0x5c:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 0x5c;
      break;
    case 0x62:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 8;
      break;
    case 0x66:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 0xc;
      break;
    case 0x6e:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 10;
      break;
    case 0x72:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 0xd;
      break;
    case 0x74:
      lVar6 = param_3[2];
      if (lVar6 == *param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      *(undefined1 *)(param_3[1] + lVar6) = 9;
      break;
    case 0x75:
      uVar5 = parse_unicode_escape::<serde_json[dc3825464c436029]::read::SliceRead>
                        (param_1,param_2,param_3);
      return uVar5;
    }
    param_3[2] = lVar6 + 1;
    uVar5 = 0;
  }
  else {
    if (uVar2 < uVar3) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302);
LAB_00721859:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    (**(code **)PTR_FN_0079ab30)(param_4,*param_1 + uVar3);
    (**(code **)PTR_FN_0079ab38)();
LAB_00721828:
    uVar5 = (*(code *)PTR_syntax_00799910)();
  }
  return uVar5;
}


