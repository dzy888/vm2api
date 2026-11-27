// 006e6c80 <bool,core[c0acaeba6ab4c2e0]::iter::adapters::filter::filter_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,bool,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::{closure#0},core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,bool,bool,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::{closure#1},<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::{closure#2}>::{closure#0}>::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>,
   <tokio[d7d91d38da47d894]::signal::unix::OsStorage as
   tokio[d7d91d38da47d894]::signal::registry::Storage>::iter::{closure#0}> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<bool,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter::filter_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,
   bool, 
   <tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::{closure#0},
   core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,
   bool, bool,
   <tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::{closure#1},
   <tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::{closure#2}>::{closure#0}>::{closure#0}>
    */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>,<tokio[d7d91d38da47d894]::signal::unix::OsStorage_as_tokio[d7d91d38da47d894]::signal::registry::Storage>::iter::{closure#0}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<bool,core[c0acaeba6ab4c2e0]::iter::adapters::filter::filter_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,bool,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::_closure_0_,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&tokio[d7d91d38da47d894]::signal::registry::EventInfo,bool,bool,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::_closure_1_,<tokio[d7d91d38da47d894]::signal::registry::Registry<tokio[d7d91d38da47d894]::signal::unix::OsStorage>>::broadcast::_closure_2_>::_closure_0_>::_closure_0_>
          (longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  bool bVar10;
  
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  uVar7 = (ulonglong)param_3;
  if (param_1 != param_2) {
    uVar8 = (ulonglong)(param_2 - param_1) >> 5;
    pcVar9 = (char *)(param_1 + 8);
    do {
      LOCK();
      cVar6 = *pcVar9;
      *pcVar9 = '\0';
      UNLOCK();
      if (cVar6 != '\0') {
        lVar3 = *(longlong *)(pcVar9 + -8);
        lVar4 = *(longlong *)(lVar3 + 0x138);
        if (lVar4 != 0) {
          LOCK();
          bVar10 = *(int *)(lVar3 + 0x148) == 0;
          if (bVar10) {
            *(int *)(lVar3 + 0x148) = 0x3fffffff;
          }
          UNLOCK();
          if (bVar10) {
            if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0) goto LAB_006e6d8c;
LAB_006e6d12:
            LOCK();
            *(longlong *)(lVar3 + 0x130) = *(longlong *)(lVar3 + 0x130) + 2;
            UNLOCK();
LAB_006e6d22:
            if (((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0) &&
               (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
              *(undefined1 *)(lVar3 + 0x150) = 1;
            }
          }
          else {
            (*(code *)PTR_write_contended_0079a7d0)();
            if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) == 0) goto LAB_006e6d12;
LAB_006e6d8c:
            cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            LOCK();
            *(longlong *)(lVar3 + 0x130) = *(longlong *)(lVar3 + 0x130) + 2;
            UNLOCK();
            if (cVar6 != '\0') goto LAB_006e6d22;
          }
          LOCK();
          piVar1 = (int *)(lVar3 + 0x148);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -0x3fffffff;
          UNLOCK();
          if (0x3fffffff < iVar2 + 0xc0000001U) {
            (*(code *)PTR_wake_writer_or_readers_0079a7c8)();
          }
          (*(code *)PTR_notify_waiters_0079a7c0)();
        }
        uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 | lVar4 != 0);
      }
      pcVar9 = pcVar9 + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return uVar7 & 0xffffffffffffff01;
}


