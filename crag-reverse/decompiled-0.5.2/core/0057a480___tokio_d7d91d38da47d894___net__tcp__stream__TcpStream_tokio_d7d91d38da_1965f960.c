// 0057a480 <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>

/* tokio[d7d91d38da47d894]::io::util::copy_bidirectional::transfer_one_direction::<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,
   tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream> */

undefined1  [16] __rustcall
tokio[d7d91d38da47d894]::io::util::copy_bidirectional::transfer_one_direction::
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>
          (undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  longlong unaff_R13;
  undefined1 auVar6 [16];
  
  bVar5 = *(byte *)((longlong)param_2 + 0x29);
  lVar4 = param_3;
  do {
    lVar1 = (ulonglong)bVar5 - 1;
    if (bVar5 < 2) {
      lVar1 = 0;
    }
    if (lVar1 == 0) {
      auVar6 = <tokio[d7d91d38da47d894]::io::util::copy::CopyBuffer>::poll_copy::
               <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>
                         (param_2,param_1,param_3,param_4);
      lVar4 = auVar6._8_8_;
      if (auVar6._0_8_ == 2) {
LAB_0057a556:
        uVar3 = 2;
        goto LAB_0057a569;
      }
      if ((auVar6._0_8_ & 1) != 0) {
LAB_0057a55d:
        uVar3 = 1;
        unaff_R13 = lVar4;
LAB_0057a569:
        auVar6._8_8_ = unaff_R13;
        auVar6._0_8_ = uVar3;
        return auVar6;
      }
      bVar5 = 2;
      unaff_R13 = lVar4;
      if (*(byte *)((longlong)param_2 + 0x29) < 2) {
        lVar1 = param_2[1];
joined_r0x0057a543:
        if (lVar1 != 0) {
          lVar4 = 1;
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
    }
    else {
      if ((int)lVar1 != 1) {
        unaff_R13 = *param_2;
        uVar3 = 0;
        goto LAB_0057a569;
      }
      uVar2 = (*(code *)PTR_poll_shutdown_00799dc0)();
      if ((uVar2 & 1) != 0) goto LAB_0057a556;
      if (lVar4 != 0) goto LAB_0057a55d;
      unaff_R13 = *param_2;
      bVar5 = 3;
      if (*(byte *)((longlong)param_2 + 0x29) < 2) {
        lVar1 = param_2[1];
        goto joined_r0x0057a543;
      }
    }
    *param_2 = unaff_R13;
    *(byte *)((longlong)param_2 + 0x29) = bVar5;
  } while( true );
}


