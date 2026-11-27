// 00521810 validate

/* <craggemini_core[66f3c71560d70857]::license::MachineIdentity>::validate */

undefined1 __rustcall
<craggemini_core[66f3c71560d70857]::license::MachineIdentity>::validate(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong extraout_RDX;
  char local_39;
  undefined1 local_38;
  
  uVar3 = 3;
  if (((*(char *)(param_1 + 0x60) == '\x01') && (*(longlong *)(param_1 + 0x10) == 10)) &&
     ((short)(*(longlong **)(param_1 + 8))[1] == 0x696e &&
      **(longlong **)(param_1 + 8) == 0x696d656767617263)) {
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 - 1 < 0x100) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (uVar1 < 0x10) {
        uVar6 = 0;
        do {
          if (*(char *)(lVar2 + uVar6) == '\0') {
            return 3;
          }
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
      }
      else {
        lVar5 = (*(code *)PTR_memchr_aligned_00799490)(uVar1 - 1,uVar1);
        if (lVar5 == 1) {
          return 3;
        }
      }
      ::<str>::trim_matches::<<char>::is_whitespace>(lVar2,uVar1);
      if (extraout_RDX == uVar1) {
        iVar4 = (*(code *)PTR_bcmp_00799020)();
        uVar3 = 3;
        if (((iVar4 == 0) &&
            (craggemini_core[66f3c71560d70857]::license::decode_hash
                       (&local_39,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40)),
            uVar3 = local_38, local_39 != '\x01')) &&
           (craggemini_core[66f3c71560d70857]::license::decode::<32:usize>
                      (&local_39,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)),
           uVar3 = local_38, local_39 != '\x01')) {
          uVar3 = 0xff;
        }
      }
      else {
        uVar3 = 3;
      }
    }
  }
  return uVar3;
}


