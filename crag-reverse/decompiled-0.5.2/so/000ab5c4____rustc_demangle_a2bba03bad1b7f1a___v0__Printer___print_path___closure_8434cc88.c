// 000ab5c4 <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x000ab6ec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::skipping_printing::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::{closure#0}>
    */

ulonglong __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::skipping_printing::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::_closure_0_>(longlong param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  undefined *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [12];
  byte bStack_5c;
  byte bStack_5b;
  longlong lStack_58;
  undefined1 local_19;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar5 = print_path(param_1,0);
  if ((char)uVar5 == '\0') {
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    return uVar5;
  }
  puVar6 = &DAT_000c25d8;
  (*(code *)PTR_unwrap_failed_000c3c78)
            (&DAT_000c25d8,&local_19,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2480);
  puVar2 = _UNK_00016a5e;
  if (_UNK_00016a5e == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar7 = 0x3d;
    lStack_58 = param_1;
    cVar4 = (*(code *)PTR_write_char_000c4040)();
    puVar3 = PTR_write_char_000c4040;
    uVar5 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    if (cVar4 == '\0') {
      do {
        while (iVar7 == 0x22) {
          cVar4 = (*(code *)puVar3)();
          iVar7 = -1;
          if (cVar4 != '\0') goto LAB_000ab6c3;
        }
        if (iVar7 == -1) {
          uVar1 = *puVar2;
          UNRECOVERED_JUMPTABLE = *(code **)(puVar2[1] + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000bdd3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return uVar5;
        }
        <char>::escape_debug_ext(auStack_68,iVar7);
        uVar8 = (ulonglong)bStack_5b;
        uVar9 = (ulonglong)bStack_5c;
        while (uVar9 < uVar8) {
          cVar4 = (*(code *)puVar3)();
          uVar9 = uVar9 + 1;
          if (cVar4 != '\0') goto LAB_000ab6c3;
        }
        iVar7 = -1;
      } while( true );
    }
  }
LAB_000ab6c5:
  return uVar5 & 0xffffffff;
LAB_000ab6c3:
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  goto LAB_000ab6c5;
}


