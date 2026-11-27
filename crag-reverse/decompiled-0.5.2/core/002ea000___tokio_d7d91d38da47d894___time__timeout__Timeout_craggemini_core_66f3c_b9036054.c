// 002ea000 <tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_::_closure_0_>>
          (longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = (char)param_1[0x11];
  if (cVar1 == '\x05') {
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x12);
    goto switchD_002ea04b_default;
  }
  if (cVar1 == '\x04') {
    cVar1 = *(char *)((longlong)param_1 + 0x115);
    if (cVar1 == '\x05') {
      if (1 < *(byte *)((longlong)param_1 + 0x11a9) - 4) {
        if (*(byte *)((longlong)param_1 + 0x11a9) != 3) goto LAB_002ea1c2;
        if (((((char)param_1[0x252] == '\x03') && ((char)param_1[0x243] == '\x03')) &&
            ((char)param_1[0x251] == '\x03')) && ((char)param_1[0x250] == '\x03')) {
          (*(code *)PTR_drop_007990e0)();
          if (param_1[0x24b] != 0) {
            (**(code **)(param_1[0x24b] + 0x18))();
          }
        }
      }
      if (param_1[0x231] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (param_1[0x22e] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x235) = 0;
LAB_002ea1c2:
      if (param_1[0x1e] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (param_1[0x1b] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x12);
      if ((int)param_1[0x15] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x12);
    }
    else {
      if (cVar1 == '\x04') goto LAB_002ea1c2;
      if (cVar1 != '\x03') goto switchD_002ea04b_default;
      <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
                (param_1 + 0x23);
    }
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
    lVar2 = *param_1;
    goto joined_r0x002ea22d;
  }
  if (cVar1 != '\x03') {
switchD_002ea04b_default:
    lVar2 = *param_1;
    goto joined_r0x002ea22d;
  }
  switch(*(undefined1 *)((longlong)param_1 + 0x124)) {
  case 3:
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x25);
    break;
  case 6:
  case 7:
    if (param_1[0x1c] == 0) goto switchD_002ea04b_caseD_4;
    goto LAB_002ea05e;
  case 0xf:
    if (param_1[0x25] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002ea04b::switchdataD_0018f020,1);
    }
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if (param_1[0x1f] != 0) {
LAB_002ea05e:
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  case 4:
  case 5:
  case 8:
  case 9:
switchD_002ea04b_caseD_4:
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x12);
    if ((int)param_1[0x15] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x12);
    break;
  default:
    goto switchD_002ea04b_default;
  }
  *(undefined1 *)((longlong)param_1 + 0x123) = 0;
  lVar2 = *param_1;
joined_r0x002ea22d:
  if (lVar2 == 2) {
    return;
  }
  if (lVar2 == 0) {
    plVar3 = (longlong *)param_1[1];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar3 = (longlong *)param_1[1];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
  return;
}


