// 0077081b fmt

/* WARNING: Switch with 1 destination removed at 0x00770945 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <rustc_demangle[a2bba03bad1b7f1a]::Demangle as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

undefined8 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::Demangle_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int **local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  int *local_28;
  undefined1 local_19;
  
  if (*param_1 == 1) {
    local_28 = param_1 + 2;
    local_40 = 0;
    local_38 = 1000000;
    local_50 = &local_28;
    if ((*(uint *)(param_2 + 0x10) >> 0x17 & 1) == 0) {
      puVar3 = &anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954;
    }
    else {
      puVar3 = (undefined2 *)&DAT_001c1160;
    }
    local_48 = PTR_fmt_0079b2e0;
    local_30 = param_2;
    cVar1 = (*(code *)PTR_write_007994b0)(&local_50,puVar3);
    if ((int)local_40 == 1) {
      if (cVar1 == '\0') {
        (*(code *)PTR_unwrap_failed_00799028)
                  (&DAT_00797868,&local_19,&PTR_s__rust_deps_rustc_demangle_0_1_27_00797bc0);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(_DAT_0000003f + 0x18))
                          (*(code **)(_DAT_0000003f + 0x18),
                           *(undefined8 *)
                            (&DAT_001c12e0 +
                            (ulonglong)*(byte *)s__fmt__Error__from__SizeLimitedFm_001c117a._0_8_ *
                            8));
        return uVar2;
      }
      cVar1 = (*(code *)PTR_write_str_00799488)();
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else {
    cVar1 = (*(code *)PTR_write_str_00799488)(param_4,*(undefined8 *)(param_1 + 10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = (*(code *)PTR_write_str_00799488)();
  return uVar2;
}


