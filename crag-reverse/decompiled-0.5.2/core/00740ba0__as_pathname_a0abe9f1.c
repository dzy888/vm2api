// 00740ba0 as_pathname

/* <std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr>::as_pathname */

char * __rustcall
<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr>::as_pathname(uint *param_1)

{
  code *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_1;
  if (uVar3 == 2) {
    return (char *)0x0;
  }
  if (*(char *)((longlong)param_1 + 6) == '\0') {
    if (uVar3 - 2 < 0x6d) {
      return (char *)0x0;
    }
  }
  else {
    if (uVar3 - 3 < 0x6d) {
      return (char *)((longlong)param_1 + 6);
    }
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007967e0,0x6c);
  }
  (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007967c8,0x6c);
  pcVar1 = (code *)swi(3);
  pcVar2 = (char *)(*pcVar1)();
  return pcVar2;
}


