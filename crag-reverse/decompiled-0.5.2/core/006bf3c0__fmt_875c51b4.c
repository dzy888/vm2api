// 006bf3c0 fmt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <httpdate[ed67980a84eed9e4]::date::HttpDate as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<httpdate[ed67980a84eed9e4]::date::HttpDate_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined4 param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  if ((byte)(*(char *)(param_2 + 7) - 1U) < 7) {
    if (0xb < (byte)(*(char *)(param_2 + 6) - 1U)) goto LAB_006bf5b6;
    uVar2 = (*(code *)PTR_from_utf8_00799468)((*(byte *)(param_2 + 2) / 10) * 10,0x1d);
    if (local_30 != 1) {
      (*(code *)PTR_write_str_00799488)(uVar2,CONCAT44(uStack_1c,uStack_20));
      return;
    }
    param_1 = (*(code *)PTR_unwrap_failed_00799028)
                        (&DAT_00792d10,local_18,&PTR_s__vendor_httpdate_1_0_3_src_date__00792d30);
  }
  param_1 = (*(code *)PTR_panic_00799338)(param_1,&PTR_s__vendor_httpdate_1_0_3_src_date__00792d60);
LAB_006bf5b6:
  (*(code *)PTR_panic_00799338)(param_1,&PTR_s__vendor_httpdate_1_0_3_src_date__00792d48);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


