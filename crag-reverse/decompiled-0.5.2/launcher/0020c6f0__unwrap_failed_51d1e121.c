// 0020c6f0 unwrap_failed

/* core[c0acaeba6ab4c2e0]::result::unwrap_failed */

void __rustcall core[c0acaeba6ab4c2e0]::result::unwrap_failed(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  (*(code *)PTR_panic_fmt_0021a010)(in_RCX,in_R8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


