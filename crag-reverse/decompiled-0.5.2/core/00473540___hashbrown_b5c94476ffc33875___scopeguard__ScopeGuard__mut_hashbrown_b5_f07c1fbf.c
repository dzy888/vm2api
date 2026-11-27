// 00473540 <hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<&mut_hashbrown[b5c94476ffc33875]::raw::RawTableInner,<hashbrown[b5c94476ffc33875]::raw::RawTableInner>::rehash_in_place::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<&mut
   hashbrown[b5c94476ffc33875]::raw::RawTableInner,
   <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::rehash_in_place::{closure#0}>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hashbrown[b5c94476ffc33875]::scopeguard::ScopeGuard<&mut_hashbrown[b5c94476ffc33875]::raw::RawTableInner,<hashbrown[b5c94476ffc33875]::raw::RawTableInner>::rehash_in_place::_closure_0_>>
          (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = plVar2[1];
  if (lVar3 != -1) {
    pcVar4 = (code *)param_1[1];
    if (pcVar4 == (code *)0x0) {
      uVar6 = 0xfffffffffffffff0;
      do {
        if (SBORROW1('\0',*(char *)(*plVar2 + 0x10 + uVar6))) {
          uVar5 = plVar2[1];
          *(undefined1 *)(*plVar2 + 0x10 + uVar6) = 0xff;
          *(undefined1 *)(*plVar2 + 0x10 + (uVar5 & uVar6)) = 0xff;
          plVar2[3] = plVar2[3] + -1;
        }
        lVar1 = uVar6 - lVar3;
        uVar6 = uVar6 + 1;
      } while (lVar1 != -0x10);
    }
    else {
      uVar6 = 0xfffffffffffffff0;
      do {
        if (SBORROW1('\0',*(char *)(*plVar2 + 0x10 + uVar6))) {
          uVar5 = plVar2[1];
          *(undefined1 *)(*plVar2 + 0x10 + uVar6) = 0xff;
          *(undefined1 *)(*plVar2 + 0x10 + (uVar5 & uVar6)) = 0xff;
          (*pcVar4)();
          plVar2[3] = plVar2[3] + -1;
        }
        lVar1 = uVar6 - lVar3;
        uVar6 = uVar6 + 1;
      } while (lVar1 != -0x10);
    }
  }
  uVar6 = plVar2[1];
  uVar5 = (uVar6 + 1 & 0xfffffffffffffff8) - (uVar6 + 1 >> 3);
  if (uVar6 < 8) {
    uVar5 = uVar6;
  }
  plVar2[2] = uVar5 - plVar2[3];
  return;
}


