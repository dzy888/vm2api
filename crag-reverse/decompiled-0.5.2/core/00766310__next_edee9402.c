// 00766310 next

/* <std[6c98fd8553dbae28]::sys::fs::unix::ReadDir as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sys::fs::unix::ReadDir_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(char *)(param_2 + 1) == '\0') {
    piVar6 = (int *)(*(code *)PTR___errno_location_007990a0)();
    plVar3 = (longlong *)*param_2;
    *piVar6 = 0;
    puVar7 = (undefined8 *)(*(code *)PTR_readdir64_0079b168)();
    puVar5 = PTR_strlen_0079aa38;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        lVar8 = (*(code *)puVar5)();
        if (lVar8 == 1) {
          if (*(char *)((longlong)puVar7 + 0x13) != '.') goto LAB_007663b0;
        }
        else if ((lVar8 != 2) || (*(short *)((longlong)puVar7 + 0x13) != 0x2e2e)) {
LAB_007663b0:
          uVar10 = *puVar7;
          uVar1 = *(undefined1 *)((longlong)puVar7 + 0x12);
          uVar9 = (*(code *)PTR_from_0079afa0)();
          LOCK();
          lVar8 = *plVar3;
          *plVar3 = *plVar3 + 1;
          UNLOCK();
          if (*plVar3 == 0 || SCARRY8(lVar8,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          param_1[1] = plVar3;
          param_1[2] = uVar9;
          param_1[3] = param_3;
          param_1[4] = uVar10;
          *(undefined1 *)(param_1 + 5) = uVar1;
          goto LAB_0076642b;
        }
        *piVar6 = 0;
        puVar7 = (undefined8 *)(*(code *)PTR_readdir64_0079b168)();
      } while (puVar7 != (undefined8 *)0x0);
    }
    *(undefined1 *)(param_2 + 1) = 1;
    iVar2 = *piVar6;
    if ((longlong)iVar2 == 0) {
      uVar10 = 0;
    }
    else {
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      param_1[1] = 0;
      param_1[2] = (longlong)iVar2 << 0x20 | 2;
LAB_0076642b:
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  *param_1 = uVar10;
  return param_1;
}


