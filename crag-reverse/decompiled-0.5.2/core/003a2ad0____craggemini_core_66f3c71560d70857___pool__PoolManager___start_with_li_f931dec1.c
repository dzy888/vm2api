// 003a2ad0 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003a2c96 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 unaff_R14;
  longlong lVar11;
  undefined8 unaff_R15;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  
  cVar1 = *(char *)(param_1 + 0x39a);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    uVar13 = <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    lVar7 = *(longlong *)(param_1 + 0x198);
    if (lVar7 != 0) {
      lVar11 = *(longlong *)(param_1 + 400);
      do {
        uVar13 = <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar11);
        lVar11 = lVar11 + 0x1a0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(longlong *)(param_1 + 0x188) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
    }
    plVar5 = *(longlong **)(param_1 + 0x1a8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>
        ::drop_slow(param_1 + 0x1a8);
      }
    }
    uVar13 = (*(code *)PTR_drop_007990c8)();
    plVar5 = *(longlong **)(param_1 + 0x1a0);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 != 0) {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x1a0);
    plVar5 = *(longlong **)(lVar7 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        uVar13 = (*(code *)PTR_drop_slow_007990d0)();
      }
    }
    puVar4 = PTR_drop_slow_007990d0;
    if (*(longlong *)(lVar7 + 0x28) != 0) {
      puVar9 = *(undefined8 **)(lVar7 + 0x20);
      lVar11 = 1 - *(longlong *)(lVar7 + 0x28);
      do {
        plVar5 = (longlong *)*puVar9;
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          uVar13 = (*(code *)puVar4)();
        }
        puVar9 = puVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 1);
    }
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)
                         (uVar13,8,param_5,param_6,unaff_R14,unaff_R15,unaff_RBP);
    }
    if (lVar7 != -1) {
      LOCK();
      plVar5 = (longlong *)(lVar7 + 8);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        (*(code *)PTR_free_0079adc8)(uVar13,8);
        return;
      }
    }
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x1f89) != '\x03') {
      if (*(char *)(param_1 + 0x1f89) == '\0') {
        lVar7 = *(longlong *)(param_1 + 0x4d8);
        if (lVar7 != 0) {
          lVar11 = *(longlong *)(param_1 + 0x4d0);
          do {
            <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar11);
            lVar11 = lVar11 + 0x1a0;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (*(longlong *)(param_1 + 0x4c8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      cVar1 = *(char *)(param_1 + 0x39e);
      goto joined_r0x003a2bc0;
    }
    cVar1 = *(char *)(param_1 + 0xbf9);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0xc92) == '\x04') {
        if (*(char *)(param_1 + 0x1f84) != '\x03') goto LAB_003a3ff3;
        cVar1 = *(char *)(param_1 + 0xd70);
        if (cVar1 == '\x05') {
          <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
                    (param_1 + 0xd78);
          goto switchD_003a3025_default;
        }
        if (cVar1 == '\x04') {
          cVar1 = *(char *)(param_1 + 0xdfd);
          if (cVar1 == '\x05') {
            if (1 < *(byte *)(param_1 + 0x1e91) - 4) {
              if (*(byte *)(param_1 + 0x1e91) != 3) goto LAB_003a3f4e;
              if ((((*(char *)(param_1 + 0x1f78) == '\x03') &&
                   (*(char *)(param_1 + 0x1f00) == '\x03')) &&
                  (*(char *)(param_1 + 0x1f70) == '\x03')) &&
                 (*(char *)(param_1 + 0x1f68) == '\x03')) {
                (*(code *)PTR_drop_007990e0)();
                if (*(longlong *)(param_1 + 8000) != 0) {
                  (**(code **)(*(longlong *)(param_1 + 8000) + 0x18))();
                }
              }
            }
            if (*(longlong *)(param_1 + 0x1e70) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            if (*(longlong *)(param_1 + 0x1e58) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            *(undefined1 *)(param_1 + 0x1e90) = 0;
LAB_003a3f4e:
            if (*(longlong *)(param_1 + 0xdd8) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            if (*(longlong *)(param_1 + 0xdc0) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(param_1 + 0xd78);
            if (*(int *)(param_1 + 0xd90) != -1) {
              (*(code *)PTR_close_00799030)();
            }
            <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xd78);
          }
          else {
            if (cVar1 == '\x04') goto LAB_003a3f4e;
            if (cVar1 != '\x03') goto switchD_003a3025_default;
            <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
                      (param_1 + 0xe00);
          }
          *(undefined1 *)(param_1 + 0xdfc) = 0;
        }
        else {
          if (cVar1 != '\x03') goto switchD_003a3025_default;
          switch(*(undefined1 *)(param_1 + 0xe0c)) {
          case 3:
            <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
                      (param_1 + 0xe10);
            goto LAB_003a39cb;
          case 4:
          case 5:
          case 8:
          case 9:
            goto switchD_003a3025_caseD_4;
          case 6:
          case 7:
            lVar7 = *(longlong *)(param_1 + 0xdc8);
            break;
          case 0xf:
            if (*(longlong *)(param_1 + 0xe10) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a3025::switchdataD_00192828,1);
            }
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
            lVar7 = *(longlong *)(param_1 + 0xde0);
            break;
          default:
            goto switchD_003a3025_default;
          }
          if (lVar7 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
switchD_003a3025_caseD_4:
          <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(param_1 + 0xd78);
          if (*(int *)(param_1 + 0xd90) != -1) {
            (*(code *)PTR_close_00799030)();
          }
          <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xd78);
LAB_003a39cb:
          *(undefined1 *)(param_1 + 0xe0b) = 0;
        }
switchD_003a3025_default:
        if (*(longlong *)(param_1 + 0xce8) != 2) {
          if (*(longlong *)(param_1 + 0xce8) == 0) {
            plVar5 = *(longlong **)(param_1 + 0xcf0);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar5 = *(longlong **)(param_1 + 0xcf0);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0xcf8);
        }
LAB_003a3ff3:
        if (*(longlong *)(param_1 + 0xc98) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)(param_1 + 0xc90) = 0;
        if (*(longlong *)(param_1 + 0xc68) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)(param_1 + 0xc91) = 0;
      }
      else if (*(char *)(param_1 + 0xc92) == '\x03') {
        <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
                  (param_1 + 0xd20);
        if (*(longlong *)(param_1 + 0xcb0) != 2) {
          if (*(longlong *)(param_1 + 0xcb0) == 0) {
            plVar5 = *(longlong **)(param_1 + 0xcb8);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar5 = *(longlong **)(param_1 + 0xcb8);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0xcc0);
        }
        goto LAB_003a3ff3;
      }
      plVar5 = *(longlong **)(param_1 + 0xc00);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
          ::drop_slow(param_1 + 0xc00);
        }
      }
LAB_003a405b:
      *(undefined1 *)(param_1 + 0xbfb) = 0;
      if (*(longlong *)(param_1 + 0xbe0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0xbfc) = 0;
      <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0xb60);
      *(undefined1 *)(param_1 + 0xbfd) = 0;
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x9c0);
      *(undefined1 *)(param_1 + 0xbfe) = 0;
    }
    else {
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xd28) == '\x03') {
          if (((*(char *)(param_1 + 0xd26) == '\x03') && (*(short *)(param_1 + 0xd00) == -1)) &&
             ((1 < ((uint)*(ulonglong *)(param_1 + 0xd08) & 3) - 2 &&
              ((*(ulonglong *)(param_1 + 0xd08) & 3) != 0)))) {
            (*(code *)PTR_drop_00799040)();
          }
          <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0xc80);
          *(undefined1 *)(param_1 + 0xd29) = 0;
        }
        else if (*(char *)(param_1 + 0xd28) == '\0') {
          <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0xc00);
        }
        goto LAB_003a405b;
      }
      if (cVar1 == '\0') {
        <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x778);
        uVar13 = <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x918);
        if (*(longlong *)(param_1 + 0x998) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
        }
      }
    }
    puVar4 = PTR___rust_dealloc_00798fc8;
    lVar7 = *(longlong *)(param_1 + 0x528);
    if (*(longlong *)(param_1 + 0x538) != lVar7) {
      uVar12 = (ulonglong)(*(longlong *)(param_1 + 0x538) - lVar7) / 0x238;
      lVar7 = lVar7 + 0x1a0;
      do {
        <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar7 + -0x1a0);
        uVar13 = <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(lVar7);
        if (*(longlong *)(lVar7 + 0x80) != 0) {
          (*(code *)puVar4)(uVar13,1);
        }
        lVar7 = lVar7 + 0x238;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    lVar7 = 0x1f8c;
    lVar11 = 0x1f8b;
    if (*(longlong *)(param_1 + 0x530) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_003a415c;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x3560) != '\x03') goto switchD_003a2b2c_default;
  switch(*(undefined1 *)(param_1 + 0x4a8)) {
  case 3:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::_closure_0_>
              (param_1 + 0xd20);
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0xd00);
    break;
  case 4:
    if (((*(char *)(param_1 + 0x528) == '\x03') && (*(char *)(param_1 + 0x520) == '\x03')) &&
       (*(char *)(param_1 + 0x4d8) == '\x04')) {
      (*(code *)PTR_drop_00799100)();
      if (*(longlong *)(param_1 + 0x4e8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x18))();
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x1a9e) != '\x03') goto LAB_003a33fc;
    switch(*(undefined1 *)(param_1 + 0x120c)) {
    case 0:
      lVar7 = 0x10;
      goto LAB_003a32d7;
    default:
      goto switchD_003a2dff_caseD_1;
    case 3:
      if (*(char *)(param_1 + 0x18c0) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0x14d8);
      }
      else if (*(char *)(param_1 + 0x18c0) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x13d8);
      }
      puVar4 = PTR_close_00799030;
      if (*(int *)(param_1 + 0x12d0) != -1) {
        (*(code *)PTR_close_00799030)();
        (*(code *)puVar4)();
      }
      if ((1 < ((uint)*(ulonglong *)(param_1 + 0x12c8) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 0x12c8) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      goto LAB_003a3291;
    case 4:
      goto switchD_003a2dff_caseD_4;
    case 5:
      if (*(char *)(param_1 + 0x1708) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0x1320);
      }
      else if (*(char *)(param_1 + 0x1708) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x1220);
      }
      goto switchD_003a2dff_caseD_4;
    case 6:
      break;
    case 7:
      if (*(char *)(param_1 + 0x1708) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0x1320);
      }
      else if (*(char *)(param_1 + 0x1708) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x1220);
      }
      break;
    case 8:
      if (*(char *)(param_1 + 0x1310) == '\x03') {
        puVar9 = (undefined8 *)(param_1 + 0x1308);
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar9);
        plVar5 = (longlong *)*puVar9;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
            ::drop_slow(puVar9);
          }
        }
        if (*(longlong *)(param_1 + 0x1298) != 2) {
          if (*(longlong *)(param_1 + 0x1298) == 0) {
            plVar5 = *(longlong **)(param_1 + 0x12a0);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar5 = *(longlong **)(param_1 + 0x12a0);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x12a8);
        }
        *(undefined1 *)(param_1 + 0x1311) = 0;
      }
      else if (*(char *)(param_1 + 0x1310) == '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x1230);
      }
      goto LAB_003a31ee;
    case 9:
      if (*(char *)(param_1 + 0x12f0) == '\x03') {
        if ((*(longlong *)(param_1 + 0x12c8) != -1) && (*(longlong *)(param_1 + 0x12c8) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a2dff::switchdataD_001927fc,1);
        }
        if ((*(longlong *)(param_1 + 0x12b0) != -1) && (*(longlong *)(param_1 + 0x12b0) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x1298) != -1) && (*(longlong *)(param_1 + 0x1298) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      goto LAB_003a31e2;
    case 10:
      uVar13 = <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                         (param_1 + 0x1220);
      if ((*(longlong *)(param_1 + 0x11c8) != -1) && (*(longlong *)(param_1 + 0x11c8) != 0)) {
        uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
      }
      if ((*(longlong *)(param_1 + 0x11e0) != -1) && (*(longlong *)(param_1 + 0x11e0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
      }
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (*(undefined8 *)(param_1 + 0x11f8));
LAB_003a31e2:
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x11a8);
LAB_003a31ee:
      <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>(param_1 + 0xbc8);
      *(undefined4 *)(param_1 + 0x1218) = 0;
      *(undefined8 *)(param_1 + 0x1211) = 0;
    }
    if (*(char *)(param_1 + 0x120d) != '\0') {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0xb48);
      if (*(int *)(param_1 + 0xb60) != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xb48);
    }
    *(undefined1 *)(param_1 + 0x120d) = 0;
switchD_003a2dff_caseD_4:
    if (((*(char *)(param_1 + 0x120e) != '\0') && (*(int *)(param_1 + 0xa48) != -1)) &&
       (*(char *)(param_1 + 0x1210) == '\x01')) {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xa48);
    }
    *(undefined1 *)(param_1 + 0x120e) = 0;
    *(undefined1 *)(param_1 + 0x1210) = 0;
    if (*(char *)(param_1 + 0x120f) != '\0') {
      <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x9a0);
    }
LAB_003a3291:
    *(undefined1 *)(param_1 + 0x120f) = 0;
    <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x8d0);
    lVar7 = 400;
    if (*(int *)(param_1 + 0x7c8) != -1) {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x7c8);
      puVar4 = PTR_close_00799030;
      (*(code *)PTR_close_00799030)();
      (*(code *)puVar4)();
    }
LAB_003a32d7:
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>(param_1 + 0x4b8 + lVar7);
switchD_003a2dff_caseD_1:
    *(undefined2 *)(param_1 + 0x1a9a) = 0;
    *(undefined1 *)(param_1 + 0x1a9c) = 0;
    if (*(longlong *)(param_1 + 0x1a50) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar13 = <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(param_1 + 0x1a28));
    if (*(longlong *)(param_1 + 0x1a28) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    plVar5 = *(longlong **)(param_1 + 0x1a40);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar13 = <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>>>>
               ::drop_slow(param_1 + 0x1a40);
    }
    *(undefined1 *)(param_1 + 0x1a9d) = 0;
    plVar5 = *(longlong **)(param_1 + 0x1a20);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar13 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
               ::drop_slow(param_1 + 0x1a20);
    }
    *(undefined1 *)(param_1 + 0x1a98) = 0;
    if (*(longlong *)(param_1 + 0x1a08) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    *(undefined1 *)(param_1 + 0x1a99) = 0;
    if (*(longlong *)(param_1 + 0x19f0) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    if (*(longlong *)(param_1 + 0x19d8) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    if (*(longlong *)(param_1 + 0x19c0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
LAB_003a33fc:
    (*(code *)PTR_release_00799050)();
    break;
  case 6:
    uVar13 = <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                       (param_1 + 0x570);
    if (*(longlong *)(param_1 + 0x558) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    *(undefined1 *)(param_1 + 0x4ad) = 0;
    uVar13 = <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(param_1 + 0x530));
    if (*(longlong *)(param_1 + 0x530) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    plVar5 = *(longlong **)(param_1 + 0x548);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar13 = <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>>>>
               ::drop_slow(param_1 + 0x548);
    }
    *(undefined1 *)(param_1 + 0x4ae) = 0;
    plVar5 = *(longlong **)(param_1 + 0x528);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar13 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
               ::drop_slow(param_1 + 0x528);
    }
    if ((*(char *)(param_1 + 0x4a9) != '\0') && (*(longlong *)(param_1 + 0x4c8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    *(undefined1 *)(param_1 + 0x4a9) = 0;
    *(undefined2 *)(param_1 + 0x4af) = 0;
    if (*(char *)(param_1 + 0x4aa) != '\0') {
      plVar5 = *(longlong **)(param_1 + 0x4c0);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x4c0);
      }
    }
    *(undefined1 *)(param_1 + 0x4aa) = 0;
    *(undefined1 *)(param_1 + 0x4b1) = 0;
    goto LAB_003a33fc;
  case 7:
    if ((*(char *)(param_1 + 0x1640) != '\x03') || (0xc < *(byte *)(param_1 + 0xe8a) - 3))
    goto switchD_003a2db3_default;
    switch((uint)*(byte *)(param_1 + 0xe8a)) {
    case 3:
      if (*(char *)(param_1 + 0x11a8) == '\x03') {
        <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
                  (param_1 + 0xeb0);
      }
      goto LAB_003a3bc6;
    case 4:
      if (*(char *)(param_1 + 0x1378) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0xf90);
      }
      else if (*(char *)(param_1 + 0x1378) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xe90);
      }
      if (((*(longlong *)(param_1 + 0xbd0) == -1) &&
          (1 < ((uint)*(ulonglong *)(param_1 + 0xbd8) & 3) - 2)) &&
         ((*(ulonglong *)(param_1 + 0xbd8) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      goto LAB_003a3bc6;
    case 5:
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xf40);
      if ((1 < ((uint)*(ulonglong *)(param_1 + 0xf38) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 0xf38) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      goto LAB_003a3b8f;
    case 6:
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xe90);
      goto LAB_003a3b83;
    case 8:
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xe90);
    case 7:
      if ((1 < ((uint)*(ulonglong *)(param_1 + 0xca8) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 0xca8) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      (*(code *)PTR_close_00799030)();
      goto LAB_003a3b2b;
    case 9:
      if (*(char *)(param_1 + 0xf39) == '\x04') {
        switch(*(undefined1 *)(param_1 + 0x11a7)) {
        case 3:
          goto switchD_003a38ec_caseD_3;
        case 4:
          if (*(char *)(param_1 + 0x1639) == '\x03') {
            cVar1 = *(char *)(param_1 + 0x11fd);
            if (cVar1 == '\0') {
              plVar5 = (longlong *)(param_1 + 0x11c0);
            }
            else {
              if (cVar1 == '\x04') {
                <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>
                          (param_1 + 0x1200);
              }
              else {
                if (cVar1 != '\x03') break;
                if (*(char *)(param_1 + 0x1250) == '\x03') {
                  if (*(char *)(param_1 + 0x1248) == '\x03') {
                    <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                    ::drop(param_1 + 0x1240);
                  }
                  else if ((*(char *)(param_1 + 0x1248) == '\0') &&
                          (*(longlong *)(param_1 + 0x1228) != 0)) {
                    (*(code *)PTR___rust_dealloc_00798fc8)
                              (&switchD_003a38ec::switchdataD_001927e4,1);
                  }
                }
                if (*(longlong *)(param_1 + 0x1200) != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                }
              }
              plVar5 = (longlong *)(param_1 + 0x11d8);
            }
          }
          else {
            if (*(char *)(param_1 + 0x1639) != '\0') break;
            plVar5 = (longlong *)(param_1 + 0x11a8);
          }
          if (*plVar5 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          break;
        case 5:
        case 8:
          <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>(param_1 + 0x11a8)
          ;
          break;
        case 6:
          break;
        case 7:
          if (((*(char *)(param_1 + 0x1238) == '\x03') && (*(char *)(param_1 + 0x1230) == '\x03'))
             && ((*(char *)(param_1 + 0x1228) == '\x03' && (*(char *)(param_1 + 0x1220) == '\x03')))
             ) {
            (*(code *)PTR_drop_007990e0)();
            if (*(longlong *)(param_1 + 0x11f8) != 0) {
              (**(code **)(*(longlong *)(param_1 + 0x11f8) + 0x18))();
            }
          }
          break;
        default:
          goto switchD_003a38ec_default;
        }
        if (((*(char *)(param_1 + 0x11a4) != '\0') && (*(longlong *)(param_1 + 0x1178) != -1)) &&
           (*(longlong *)(param_1 + 0x1178) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)(param_1 + 0x11a4) = 0;
        puVar4 = PTR___rust_dealloc_00798fc8;
        if (*(char *)(param_1 + 0x11a5) != '\0') {
          lVar7 = *(longlong *)(param_1 + 0x1170);
          if (lVar7 != 0) {
            lVar11 = *(longlong *)(param_1 + 0x1168) + 8;
            do {
              if (*(longlong *)(lVar11 + -8) != 0) {
                (*(code *)puVar4)();
              }
              lVar11 = lVar11 + 0x18;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (*(longlong *)(param_1 + 0x1160) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        *(undefined1 *)(param_1 + 0x11a5) = 0;
        if (*(longlong *)(param_1 + 0x1148) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(longlong *)(param_1 + 0x1130) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
switchD_003a38ec_caseD_3:
        *(undefined1 *)(param_1 + 0x11a6) = 0;
        goto switchD_003a38ec_default;
      }
      if (((*(char *)(param_1 + 0xf39) == '\x03') && (*(char *)(param_1 + 0xff0) == '\x03')) &&
         ((*(char *)(param_1 + 0xf78) == '\x03' &&
          ((*(char *)(param_1 + 0xfe8) == '\x03' && (*(char *)(param_1 + 0xfe0) == '\x03')))))) {
        (*(code *)PTR_drop_007990e0)();
        if (*(longlong *)(param_1 + 0xfb8) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0xfb8) + 0x18))();
        }
      }
      goto LAB_003a43fa;
    case 10:
      if (*(longlong *)(param_1 + 0xe90) != 2) {
        if (*(longlong *)(param_1 + 0xe90) == 0) {
          plVar5 = *(longlong **)(param_1 + 0xe98);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0xe98);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0xea0);
      }
      break;
    case 0xb:
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
                (param_1 + 0xe90);
      *(undefined1 *)(param_1 + 0xe7c) = 0;
      break;
    case 0xc:
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xe90);
      break;
    case 0xd:
      if (*(longlong *)(param_1 + 0xe90) != 2) {
        if (*(longlong *)(param_1 + 0xe90) == 0) {
          plVar5 = *(longlong **)(param_1 + 0xe98);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0xe98);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0xea0);
      }
      goto LAB_003a3a69;
    case 0xe:
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
                (param_1 + 0xe90);
      *(undefined1 *)(param_1 + 0xe7a) = 0;
      goto LAB_003a3a69;
    case 0xf:
      if (*(char *)(param_1 + 0x1378) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0xf90);
      }
      else if (*(char *)(param_1 + 0x1378) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xe90);
      }
LAB_003a3a69:
      <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0xcc8);
      goto LAB_003a3a75;
    }
    if (*(longlong *)(param_1 + 0xe20) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xe7d) = 0;
    if (*(longlong *)(param_1 + 0x780) != -1) {
      if (((int)*(longlong *)(param_1 + 0x780) != 2) && (*(char *)(param_1 + 0xe71) != '\0')) {
        <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x780);
      }
      *(undefined1 *)(param_1 + 0xe71) = 0;
    }
    *(undefined1 *)(param_1 + 0xe71) = 0;
LAB_003a3a75:
    *(undefined1 *)(param_1 + 0xe7b) = 0;
    if ((*(char *)(param_1 + 0xe72) != '\0') && (*(longlong *)(param_1 + 0x620) != -1)) {
      if (((int)*(longlong *)(param_1 + 0x620) == 2) &&
         (((*(char *)(param_1 + 0xe73) != '\0' &&
           (1 < ((uint)*(ulonglong *)(param_1 + 0x628) & 3) - 2)) &&
          ((*(ulonglong *)(param_1 + 0x628) & 3) != 0)))) {
        (*(code *)PTR_drop_00799040)();
      }
      *(undefined1 *)(param_1 + 0xe73) = 0;
    }
    *(undefined1 *)(param_1 + 0xe72) = 0;
LAB_003a3ade:
    *(undefined2 *)(param_1 + 0xe72) = 0;
    if (*(longlong *)(param_1 + 0xcb0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xca0) != 0) && (*(char *)(param_1 + 0xe79) != '\0')) {
      <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0xca0);
    }
    *(undefined1 *)(param_1 + 0xe7e) = 0;
LAB_003a3b2b:
    *(undefined1 *)(param_1 + 0xe7e) = 0;
    *(undefined1 *)(param_1 + 0xe79) = 0;
    plVar5 = *(longlong **)(param_1 + 0xc98);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
      ::drop_slow(param_1 + 0xc98);
    }
    *(undefined1 *)(param_1 + 0xe7f) = 0;
    (*(code *)PTR_drop_007990c8)();
    plVar5 = *(longlong **)(param_1 + 0xc90);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    *(undefined1 *)(param_1 + 0xe80) = 0;
LAB_003a3b83:
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0xbe8);
LAB_003a3b8f:
    *(undefined1 *)(param_1 + 0xe81) = 0;
    uVar13 = <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x940);
    if ((*(longlong *)(param_1 + 3000) != -1) && (*(longlong *)(param_1 + 3000) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
LAB_003a3bc6:
    if (*(longlong *)(param_1 + 0xba0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar13 = <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(param_1 + 0xb78));
    if (*(longlong *)(param_1 + 0xb78) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    plVar5 = *(longlong **)(param_1 + 0xb90);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar13 = <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>>>>
               ::drop_slow(param_1 + 0xb90);
    }
    *(undefined1 *)(param_1 + 0xe82) = 0;
    plVar5 = *(longlong **)(param_1 + 0xb70);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar13 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
               ::drop_slow(param_1 + 0xb70);
    }
    *(undefined1 *)(param_1 + 0xe83) = 0;
    if (*(longlong *)(param_1 + 0xb58) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    *(undefined1 *)(param_1 + 0xe84) = 0;
    if (*(char *)(param_1 + 0xe74) == '\0') {
      *(undefined1 *)(param_1 + 0xe74) = 0;
      if (*(char *)(param_1 + 0xe75) == '\0') goto LAB_003a3c98;
LAB_003a3cba:
      (*(code *)PTR_close_00799030)();
      *(undefined1 *)(param_1 + 0xe75) = 0;
      cVar1 = *(char *)(param_1 + 0xe76);
    }
    else {
      (*(code *)PTR_close_00799030)();
      *(undefined1 *)(param_1 + 0xe74) = 0;
      if (*(char *)(param_1 + 0xe75) != '\0') goto LAB_003a3cba;
LAB_003a3c98:
      *(undefined1 *)(param_1 + 0xe75) = 0;
      cVar1 = *(char *)(param_1 + 0xe76);
    }
    if (cVar1 != '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x4e0);
    }
    *(undefined1 *)(param_1 + 0xe76) = 0;
    if (*(char *)(param_1 + 0xe77) == '\0') {
      *(undefined1 *)(param_1 + 0xe77) = 0;
      if (*(char *)(param_1 + 0xe78) == '\0') goto LAB_003a3d0a;
LAB_003a3d30:
      (*(code *)PTR_close_00799030)();
      *(undefined1 *)(param_1 + 0xe78) = 0;
      plVar5 = *(longlong **)(param_1 + 0xb50);
      LOCK();
      *plVar5 = *plVar5 + -1;
      lVar7 = *plVar5;
      UNLOCK();
    }
    else {
      (*(code *)PTR_close_00799030)();
      *(undefined1 *)(param_1 + 0xe77) = 0;
      if (*(char *)(param_1 + 0xe78) != '\0') goto LAB_003a3d30;
LAB_003a3d0a:
      *(undefined1 *)(param_1 + 0xe78) = 0;
      plVar5 = *(longlong **)(param_1 + 0xb50);
      LOCK();
      *plVar5 = *plVar5 + -1;
      lVar7 = *plVar5;
      UNLOCK();
    }
    if (lVar7 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
      drop_slow(param_1 + 0xb50);
    }
    *(undefined1 *)(param_1 + 0xe85) = 0;
    if (*(longlong *)(param_1 + 0xae8) != -1) {
      uVar13 = <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop((longlong *)(param_1 + 0xae8));
      if (*(longlong *)(param_1 + 0xae8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
      }
      (*(code *)PTR_munmap_007990b8)();
    }
    *(undefined1 *)(param_1 + 0xe86) = 0;
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x5e0);
    if (*(int *)(param_1 + 0x5f8) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    uVar13 = <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x5e0);
    if (*(longlong *)(param_1 + 0xad0) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    if (*(longlong *)(param_1 + 0xab8) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    if (*(longlong *)(param_1 + 0xaa0) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    *(undefined1 *)(param_1 + 0xe87) = 0;
    if (*(longlong *)(param_1 + 0xa88) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    if (*(longlong *)(param_1 + 0xa70) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    *(undefined1 *)(param_1 + 0xe88) = 0;
    if (*(longlong *)(param_1 + 0xa58) != 0) {
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
    lVar7 = 0xa81;
    if (*(longlong *)(param_1 + 0xa40) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
    }
LAB_003a3ebe:
    *(undefined1 *)(param_1 + 0x408 + lVar7) = 0;
switchD_003a2db3_default:
    *(undefined1 *)(param_1 + 0x4ac) = 0;
    plVar5 = *(longlong **)(param_1 + 0x3c8);
    LOCK();
    *plVar5 = *plVar5 + -1;
    lVar7 = *plVar5;
    UNLOCK();
    goto joined_r0x003a3ed8;
  case 8:
    lVar7 = 0xa3;
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::_closure_0_>
              (param_1 + 0xd00);
    goto LAB_003a3ebe;
  }
switchD_003a2b2c_default:
  plVar5 = *(longlong **)(param_1 + 0x3c8);
  LOCK();
  *plVar5 = *plVar5 + -1;
  lVar7 = *plVar5;
  UNLOCK();
joined_r0x003a3ed8:
  if (lVar7 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
    drop_slow(param_1 + 0x3c8);
  }
  plVar5 = *(longlong **)(param_1 + 0x3b8);
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
    drop_slow(param_1 + 0x3b8);
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x3568);
  plVar5 = *(longlong **)(param_1 + 0x3a8);
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::
    drop_slow(param_1 + 0x3a8);
  }
  (*(code *)PTR_drop_007990c8)();
  plVar5 = *(longlong **)(param_1 + 0x390);
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  lVar7 = 0x3a4;
  lVar11 = 0x3a3;
  if (*plVar5 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
LAB_003a415c:
  *(undefined1 *)(param_1 + lVar11) = 0;
  *(undefined1 *)(param_1 + lVar7) = 0;
  cVar1 = *(char *)(param_1 + 0x39e);
joined_r0x003a2bc0:
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x358);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>
      ::drop_slow(param_1 + 0x358);
    }
  }
  *(undefined1 *)(param_1 + 0x39e) = 0;
  if (*(char *)(param_1 + 0x39f) != '\0') {
    if (*(longlong *)(param_1 + 0x440) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar13 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(param_1 + 0x458);
    puVar4 = PTR___rust_dealloc_00798fc8;
    lVar7 = *(longlong *)(param_1 + 0x490);
    if (lVar7 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x4a0);
      if (lVar11 != 0) {
        pauVar8 = *(undefined1 (**) [16])(param_1 + 0x488);
        auVar14 = *pauVar8;
        pauVar10 = pauVar8 + 1;
        uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar6 == 0) {
            do {
              auVar14 = *pauVar10;
              pauVar8 = pauVar8 + -0x20;
              pauVar10 = pauVar10 + 1;
              uVar6 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar6 == 0);
          }
          iVar2 = 0;
          for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            iVar2 = iVar2 + 1;
          }
          if (*(longlong *)((longlong)pauVar8 + (-0x20 - (ulonglong)(uint)(iVar2 << 5))) != 0) {
            auVar14._0_8_ = (*(code *)puVar4)((ulonglong)(uint)(iVar2 << 5),1);
            auVar14._8_8_ = extraout_XMM0_Qb;
          }
          uVar13 = auVar14._0_8_;
          lVar11 = lVar11 + -1;
          uVar6 = uVar6 - 1 & uVar6;
        } while (lVar11 != 0);
      }
      if (lVar7 * 0x21 != -0x31) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,0x10);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x39f) = 0;
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    <craggemini_core[66f3c71560d70857]::resume::SignatureCache>(param_1 + 0x1f90);
  }
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  if (*(char *)(param_1 + 0x3a1) != '\0') {
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x3c0);
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x3f0);
  }
  *(undefined1 *)(param_1 + 0x3a1) = 0;
  (*(code *)PTR_drop_007990c8)();
  plVar5 = *(longlong **)(param_1 + 0x350);
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  *(undefined2 *)(param_1 + 0x39b) = 0;
  if (*(char *)(param_1 + 0x3a2) != '\0') {
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x1c8);
  }
  *(undefined1 *)(param_1 + 0x3a2) = 0;
  *(undefined1 *)(param_1 + 0x39d) = 0;
  return;
switchD_003a38ec_default:
  <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0xf40);
  *(undefined1 *)(param_1 + 0xf38) = 0;
LAB_003a43fa:
  if (*(longlong *)(param_1 + 0xe90) != 2) {
    if (*(longlong *)(param_1 + 0xe90) == 0) {
      plVar5 = *(longlong **)(param_1 + 0xe98);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0xe98);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0xea0);
  }
  goto LAB_003a3ade;
}


