// 000a5000 fmt

/* WARNING: Switch with 1 destination removed at 0x000a5092 */
/* WARNING: Switch with 1 destination removed at 0x000affc5 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::SymbolName as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

undefined8 __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::SymbolName_as_core[c0acaeba6ab4c2e0]::fmt::Display>
::fmt(int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  if (*param_1 != 2) {
    if (*param_1 == 1) {
      local_40 = 0;
      local_38 = 1000000;
      local_50 = (longlong)register0x00000020 + -0x28;
      if ((*(uint *)(param_2 + 0x10) >> 0x17 & 1) == 0) {
        puVar7 = &DAT_0000a44b;
      }
      else {
        puVar7 = &DAT_00016b64;
      }
      local_48 = PTR_fmt_000c46e8;
      cVar5 = (*(code *)PTR_write_000c3f70)(&local_50,puVar7);
      if ((int)local_40 == 1) {
        if (cVar5 == '\0') {
          (*(code *)PTR_unwrap_failed_000c3c78)
                    (&DAT_000c25b8,(longlong)register0x00000020 + -0x19,
                     &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2910);
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(ram0x0000003f + 0x18))
                            (*(code **)(ram0x0000003f + 0x18),
                             *(undefined8 *)
                              (&DAT_00016ce0 +
                              (ulonglong)*(byte *)s__fmt__Error__from__SizeLimitedFm_00016b7e._0_8_
                              * 8));
          return uVar6;
        }
        cVar5 = (*(code *)PTR_write_str_000c3d28)();
      }
      if (cVar5 != '\0') {
        return 1;
      }
    }
    else {
      cVar5 = (*(code *)PTR_write_str_000c3d28)(param_4,*(undefined8 *)(param_1 + 10));
      if (cVar5 != '\0') {
        return 1;
      }
    }
    uVar6 = (*(code *)PTR_write_str_000c3d28)();
    return uVar6;
  }
  puVar7 = *(undefined **)(param_1 + 0x12);
  if (puVar7 != (undefined *)0x0) {
    local_38 = param_2;
    do {
      (*(code *)PTR_from_utf8_000c3bd8)();
      puVar3 = local_48;
      if ((int)local_50 != 1) {
        cVar5 = (*(code *)PTR_fmt_000c3f58)();
        if (cVar5 == '\0') {
          return 0;
        }
        return 1;
      }
      cVar5 = (char)local_40;
      uVar2 = local_40 >> 8;
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar4 != '\0') {
        return 1;
      }
      if (cVar5 != '\x01') {
        return 0;
      }
      if (puVar7 < puVar3 + (uVar2 & 0xff)) {
        (*(code *)PTR_slice_index_fail_000c3bb0)
                  (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1d28,puVar7);
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      puVar7 = puVar7 + -(longlong)(puVar3 + (uVar2 & 0xff));
    } while (puVar7 != (undefined *)0x0);
  }
  return 0;
}


