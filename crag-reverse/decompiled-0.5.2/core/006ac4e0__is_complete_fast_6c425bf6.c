// 006ac4e0 is_complete_fast

/* hyper[c4782d5b5c5e3493]::proto::h1::role::is_complete_fast */

undefined8 __rustcall
hyper[c4782d5b5c5e3493]::proto::h1::role::is_complete_fast
          (longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = 0;
  if (2 < param_3) {
    uVar4 = param_3 - 3;
  }
  if (param_2 < uVar4) {
LAB_006ac5ce:
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_s__vendor_hyper_1_12_0_src_proto_h_00791cd0,param_2);
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  uVar9 = param_2 - uVar4;
  if (uVar9 != 0) {
    param_1 = param_1 + uVar4;
    lVar7 = param_3 - param_2;
    uVar4 = 3;
    if (param_3 < 3) {
      uVar4 = param_3;
    }
    uVar8 = ~param_3 + param_2 + uVar4;
    uVar5 = 1;
    do {
      cVar2 = *(char *)(param_1 + -1 + uVar5);
      if (cVar2 == '\n') {
        if ((uVar5 < uVar9) && (*(char *)(param_1 + uVar5) == '\n')) {
LAB_006ac59e:
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
        param_2 = uVar9;
        if (uVar9 < uVar5) goto LAB_006ac5b8;
        if ((1 < uVar8) && (*(short *)(param_1 + uVar5) == 0xa0d)) goto LAB_006ac59e;
      }
      else if (cVar2 == '\r') {
        if (uVar9 < uVar5) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__vendor_hyper_1_12_0_src_proto_h_00791ca0,uVar9);
          param_2 = uVar9;
LAB_006ac5b8:
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__vendor_hyper_1_12_0_src_proto_h_00791cb8,param_2);
          goto LAB_006ac5ce;
        }
        if ((2 < uVar8) &&
           (*(char *)(param_1 + 2 + uVar5) == '\n' && *(short *)(param_1 + uVar5) == 0xd0a))
        goto LAB_006ac59e;
      }
      lVar1 = (lVar7 - uVar4) + uVar5;
      uVar5 = uVar5 + 1;
      uVar8 = uVar8 - 1;
    } while (lVar1 != 0);
  }
  return 0;
}


