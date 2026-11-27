// 007314e0 <gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>
          (longlong *param_1)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_90 [3];
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  longlong local_38;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = param_1[1] + 0x10;
    do {
      if ((*(longlong *)(lVar2 + -0x10) != 0) && (*(longlong *)(lVar2 + -8) != 0)) {
        (*(code *)puVar1)();
      }
      lVar2 = lVar2 + 0x70;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar3 = param_1[3];
  if (lVar3 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[4];
    local_50 = param_1[5];
    local_90[1] = 0;
    local_68 = 0;
    local_90[2] = lVar3;
    local_60 = lVar3;
    local_58 = local_78;
  }
  local_90[0] = (ulonglong)(lVar3 != 0);
  local_70 = local_90[0];
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>
  ::dying_next(local_48,local_90);
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (local_48[0] != 0) {
    do {
      lVar3 = local_38 * 0x70;
      if ((*(longlong *)(local_48[0] + lVar3) != 0) && (*(longlong *)(local_48[0] + lVar3 + 8) != 0)
         ) {
        (*(code *)puVar1)(lVar3,8);
      }
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>
      ::dying_next(local_48,local_90);
    } while (local_48[0] != 0);
  }
  return;
}


