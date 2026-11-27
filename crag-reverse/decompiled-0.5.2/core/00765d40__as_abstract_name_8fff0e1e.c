// 00765d40 as_abstract_name

/* <std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr as
   std[6c98fd8553dbae28]::os::net::linux_ext::addr::SocketAddrExt>::as_abstract_name */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr_as_std[6c98fd8553dbae28]::os::net::linux_ext::addr::SocketAddrExt>
::as_abstract_name(uint *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar4 = (ulonglong)*param_1;
  if (uVar4 == 2) {
LAB_00765d60:
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    return auVar2 << 0x40;
  }
  if (*(char *)((longlong)param_1 + 6) == '\0') {
    if (uVar4 - 2 < 0x6d) {
      auVar5._8_8_ = uVar4 - 3;
      auVar5._0_8_ = (longlong)param_1 + 7;
      return auVar5;
    }
  }
  else {
    uVar4 = uVar4 - 3;
    if (uVar4 < 0x6d) goto LAB_00765d60;
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007967e0,0x6c);
  }
  uVar3 = 0x6c;
  (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007967c8,0x6c);
  pcVar1 = (code *)swi(3);
  auVar6._0_8_ = (*pcVar1)();
  auVar6._8_8_ = uVar3;
  return auVar6;
}


