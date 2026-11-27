// 004a9d20 is_reusable

/* <craggemini_core[66f3c71560d70857]::pool::AgySlot>::is_reusable */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AgySlot>::is_reusable
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int local_40;
  char local_3c;
  uint local_38;
  
  (*(code *)PTR_try_wait_00799320)();
  if (local_40 == 0) {
    if (local_3c == '\0') {
      (*(code *)PTR_as_raw_fd_00799b70)();
      iVar4 = (*(code *)PTR_poll_00799b78)();
      if ((-1 < iVar4) && (*(longlong *)(param_1 + 0x650) == param_3)) {
        if (param_3 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x648);
          lVar5 = 0;
          do {
            lVar1 = lVar5 + 1;
            (*(code *)PTR_<u8>_00799268)(*(undefined1 *)(lVar6 + lVar5));
            lVar5 = lVar1;
          } while (param_3 != lVar1);
        }
        cVar3 = (*(code *)PTR_<u8>_00799268)();
        if (cVar3 != '\0') {
          if ((*(longlong *)(param_1 + 0x668) != param_5) ||
             (iVar4 = (*(code *)PTR_bcmp_00799020)(), iVar4 != 0)) {
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              return 0;
            }
            lVar6 = 0;
            while ((*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10 + lVar6) != 0xf ||
                   (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6),
                   *(longlong *)((longlong)plVar2 + 7) !=
                   CONCAT71(s_ntrol_v1graceful_cancel_v1thinki_001a49ed._1_7_,
                            s_ntrol_v1graceful_cancel_v1thinki_001a49ed[0]) ||
                   *plVar2 !=
                   CONCAT17(s_ntrol_v1graceful_cancel_v1thinki_001a49ed[0],
                            anon_d3057478e380898db632effa827bd31f_78_llvm_2674179329317868992)))) {
              lVar6 = lVar6 + 0x18;
              if (*(longlong *)(param_1 + 0xe8) * 0x18 == lVar6) {
                return 0;
              }
            }
          }
          return 1;
        }
      }
    }
  }
  else if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return 0;
}


