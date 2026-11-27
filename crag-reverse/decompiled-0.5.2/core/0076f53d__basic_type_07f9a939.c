// 0076f53d basic_type

/* rustc_demangle[a2bba03bad1b7f1a]::v0::basic_type */

undefined1  [16] __rustcall
rustc_demangle[a2bba03bad1b7f1a]::v0::basic_type(char param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  byte bVar2;
  undefined1 auVar3 [16];
  
  bVar2 = param_1 + 0x9f;
  if (bVar2 < 0x1a) {
    auVar3._8_8_ = *(undefined8 *)(&DAT_001c1210 + (ulonglong)bVar2 * 8);
    auVar3._0_8_ = (&PTR_DAT_00797c40)[bVar2];
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}


