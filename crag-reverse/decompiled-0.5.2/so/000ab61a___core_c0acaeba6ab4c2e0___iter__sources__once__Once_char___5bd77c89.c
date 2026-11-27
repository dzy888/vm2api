// 000ab61a <core[c0acaeba6ab4c2e0]::iter::sources::once::Once<char>>

/* WARNING: Switch with 1 destination removed at 0x000ab6ec */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_quoted_escaped_chars::<core[c0acaeba6ab4c2e0]::iter::sources::once::Once<char>>
    */

ulonglong __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_quoted_escaped_chars::
<core[c0acaeba6ab4c2e0]::iter::sources::once::Once<char>>
          (longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_40 [12];
  byte local_34;
  byte local_33;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    cVar3 = (*(code *)PTR_write_char_000c4040)();
    puVar2 = PTR_write_char_000c4040;
    uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if (cVar3 == '\0') {
      do {
        while (param_2 == 0x22) {
          cVar3 = (*(code *)puVar2)();
          param_2 = -1;
          if (cVar3 != '\0') goto LAB_000ab6c3;
        }
        if (param_2 == -1) {
          UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar1 + 8) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000bdd3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return uVar4;
        }
        <char>::escape_debug_ext(local_40,param_2);
        uVar5 = (ulonglong)local_33;
        uVar6 = (ulonglong)local_34;
        while (uVar6 < uVar5) {
          cVar3 = (*(code *)puVar2)();
          uVar6 = uVar6 + 1;
          if (cVar3 != '\0') goto LAB_000ab6c3;
        }
        param_2 = -1;
      } while( true );
    }
  }
LAB_000ab6c5:
  return uVar4 & 0xffffffff;
LAB_000ab6c3:
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  goto LAB_000ab6c5;
}


