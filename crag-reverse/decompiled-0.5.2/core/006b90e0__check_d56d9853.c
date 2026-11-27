// 006b90e0 check

/* <hyper[c4782d5b5c5e3493]::common::date::CachedDate>::check */

void __rustcall
<hyper[c4782d5b5c5e3493]::common::date::CachedDate>::check
          (longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  
  local_30 = param_3;
  local_38 = (*(code *)PTR_now_007993f0)();
  if (local_38 == *param_1) {
    if (local_30 <= *(uint *)(param_1 + 1)) {
      return;
    }
  }
  else if (local_38 <= *param_1) {
    return;
  }
  (*(code *)PTR_duration_since_007993f8)(0,0);
  uVar3 = 0;
  if ((char)local_58 == '\0') {
    uVar3 = local_48;
  }
  param_1[2] = 0;
  local_40 = (*(code *)PTR_from_0079a4b8)();
  local_58 = &local_40;
  local_50 = PTR_fmt_0079a4c0;
  (*(code *)PTR_write_007994b0)
            (&local_58,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954);
  (*(code *)PTR_add_0079a4c8)
            (0,1,&anon_a0bdfe76b4b74febc0fe96214a8c0b42_10_llvm_14698491423915303612);
  uVar2 = 0;
  lVar1 = (*(code *)PTR_sub_0079a4d0)
                    (uVar3,0,&anon_a0bdfe76b4b74febc0fe96214a8c0b42_10_llvm_14698491423915303612);
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}


