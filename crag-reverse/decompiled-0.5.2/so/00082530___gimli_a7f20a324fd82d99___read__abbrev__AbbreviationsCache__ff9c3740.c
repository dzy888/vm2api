// 00082530 <gimli[a7f20a324fd82d99]::read::abbrev::AbbreviationsCache>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<gimli[a7f20a324fd82d99]::read::abbrev::AbbreviationsCache>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<gimli[a7f20a324fd82d99]::read::abbrev::AbbreviationsCache>
          (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  ulonglong local_80 [3];
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38 [2];
  longlong local_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = param_1[1];
    local_40 = param_1[2];
    local_80[1] = 0;
    local_58 = 0;
    local_80[2] = lVar1;
    local_50 = lVar1;
    local_48 = local_68;
  }
  local_80[0] = (ulonglong)(lVar1 != 0);
  local_60 = local_80[0];
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,gimli[a7f20a324fd82d99]::read::Error>>>
  ::dying_next(local_38,local_80);
  puVar3 = PTR_drop_slow_000c4100;
  if (local_38[0] != 0) {
    do {
      if (*(char *)(local_38[0] + local_28 * 0x10) == -1) {
        plVar2 = *(longlong **)(local_38[0] + local_28 * 0x10 + 8);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)puVar3)();
        }
      }
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>,gimli[a7f20a324fd82d99]::read::Error>>>
      ::dying_next(local_38,local_80);
    } while (local_38[0] != 0);
  }
  return;
}


