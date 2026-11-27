// 0075a260 print_to_buffer_if_capture_used

/* std[6c98fd8553dbae28]::io::stdio::print_to_buffer_if_capture_used */

undefined8 __rustcall
std[6c98fd8553dbae28]::io::stdio::print_to_buffer_if_capture_used
          (undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *in_FS_OFFSET;
  bool bVar8;
  
  if (OUTPUT_CAPTURE_USED != '\0') {
    lVar3 = *in_FS_OFFSET;
    plVar1 = (longlong *)(lVar3 + -0xe8);
    if (*(char *)(lVar3 + -0xe0) == '\0') {
      lVar3 = *plVar1;
      *plVar1 = 0;
    }
    else {
      if (*(char *)(lVar3 + -0xe0) != '\x01') {
        return 0;
      }
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar3 + -0xe0) = 0;
      lVar3 = *plVar1;
      *plVar1 = 0;
    }
    if (lVar3 != 0) {
      LOCK();
      bVar8 = *(int *)(lVar3 + 0x10) == 0;
      if (bVar8) {
        *(int *)(lVar3 + 0x10) = 1;
      }
      UNLOCK();
      if (!bVar8) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar5 = bVar5 ^ 1;
      }
      uVar7 = <alloc[12e961f32105355]::vec::Vec<u8>as_std[6c98fd8553dbae28]::io::Write>::write_fmt
                        (lVar3 + 0x18,param_1,param_2);
      if (((uVar7 != 0) && (1 < ((uint)uVar7 & 3) - 2)) && ((uVar7 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      if (((bVar5 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
        *(undefined1 *)(lVar3 + 0x14) = 1;
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x10) = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
      }
      plVar4 = (longlong *)*plVar1;
      *plVar1 = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799130)();
        }
      }
      return 1;
    }
  }
  return 0;
}


