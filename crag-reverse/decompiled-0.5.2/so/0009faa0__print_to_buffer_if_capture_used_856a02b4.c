// 0009faa0 print_to_buffer_if_capture_used

/* std[6c98fd8553dbae28]::io::stdio::print_to_buffer_if_capture_used */

undefined8 __rustcall
std[6c98fd8553dbae28]::io::stdio::print_to_buffer_if_capture_used
          (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (OUTPUT_CAPTURE_USED != '\0') {
    plVar6 = (longlong *)__tls_get_addr();
    if ((char)plVar6[1] == '\0') {
      lVar2 = *plVar6;
      *plVar6 = 0;
    }
    else {
      if ((char)plVar6[1] != '\x01') {
        return 0;
      }
      (*(code *)PTR_register_000c4398)();
      *(undefined1 *)(plVar6 + 1) = 0;
      lVar2 = *plVar6;
      *plVar6 = 0;
    }
    if (lVar2 != 0) {
      LOCK();
      bVar8 = *(int *)(lVar2 + 0x10) == 0;
      if (bVar8) {
        *(int *)(lVar2 + 0x10) = 1;
      }
      UNLOCK();
      if (!bVar8) {
        (*(code *)PTR_lock_contended_000c3c80)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
        bVar4 = 0;
      }
      else {
        bVar4 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
        bVar4 = bVar4 ^ 1;
      }
      uVar7 = <alloc[12e961f32105355]::vec::Vec<u8>as_std[6c98fd8553dbae28]::io::Write>::write_fmt
                        (lVar2 + 0x18,param_1,param_2);
      if (((uVar7 != 0) && (1 < ((uint)uVar7 & 3) - 2)) && ((uVar7 & 3) != 0)) {
        (*(code *)PTR_drop_000c3ae0)();
      }
      if (((bVar4 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar5 == '\0')) {
        *(undefined1 *)(lVar2 + 0x14) = 1;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x10) = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_syscall_000c4110)(1,0x81);
      }
      plVar3 = (longlong *)*plVar6;
      *plVar6 = lVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          (*(code *)PTR_drop_slow_000c4120)();
        }
      }
      return 1;
    }
  }
  return 0;
}


