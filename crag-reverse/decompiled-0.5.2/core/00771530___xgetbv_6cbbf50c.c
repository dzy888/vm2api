// 00771530 _xgetbv

/* core[c0acaeba6ab4c2e0]::core_arch::x86::xsave::_xgetbv */

ulonglong __rustcall core[c0acaeba6ab4c2e0]::core_arch::x86::xsave::_xgetbv(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong in_XCR0;
  
  uVar1 = xinuse(0);
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)(in_XCR0 & uVar1)) |
         in_XCR0 & uVar1 & 0xffffffff00000000;
}


