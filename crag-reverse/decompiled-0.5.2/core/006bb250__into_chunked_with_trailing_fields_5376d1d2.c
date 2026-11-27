// 006bb250 into_chunked_with_trailing_fields

/* <hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::into_chunked_with_trailing_fields */

undefined4 * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::into_chunked_with_trailing_fields
          (undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *param_2;
  if (lVar4 < -0x7ffffffffffffffe) {
    uVar5 = (undefined4)*param_2;
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    lVar3 = param_2[1];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar4 = param_2[3];
    *(longlong *)(param_1 + 4) = param_2[2];
    *(longlong *)(param_1 + 6) = lVar4;
    *param_1 = uVar5;
    param_1[1] = uVar1;
    param_1[2] = (int)lVar3;
    param_1[3] = uVar2;
    if (param_3[2] != 0) {
      lVar4 = param_3[1] + 0x38;
      lVar3 = 1 - param_3[2];
      do {
        if (*(longlong *)(lVar4 + -0x38) != 0) {
          uVar5 = (**(code **)(*(longlong *)(lVar4 + -0x38) + 0x20))
                            (uVar5,*(undefined8 *)(lVar4 + -0x28));
        }
        lVar4 = lVar4 + 0x20;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
  }
  else {
    *(longlong *)(param_1 + 4) = param_3[2];
    uVar5 = (undefined4)*param_3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    lVar3 = param_3[1];
    uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_1 = uVar5;
    param_1[1] = uVar1;
    param_1[2] = (int)lVar3;
    param_1[3] = uVar2;
    *(char *)(param_1 + 6) = (char)param_2[3];
    if (lVar4 == -1) {
      return param_1;
    }
    if (param_2[2] != 0) {
      lVar4 = param_2[1] + 0x38;
      lVar3 = 1 - param_2[2];
      do {
        if (*(longlong *)(lVar4 + -0x38) != 0) {
          uVar5 = (**(code **)(*(longlong *)(lVar4 + -0x38) + 0x20))
                            (uVar5,*(undefined8 *)(lVar4 + -0x28));
        }
        lVar4 = lVar4 + 0x20;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
    param_3 = param_2;
  }
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
  }
  return param_1;
}


