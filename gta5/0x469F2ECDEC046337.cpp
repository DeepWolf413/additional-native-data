// taxiservice.ysc @ L10147
void func_184()
{
  if (CAM::DOES_CAM_EXIST(iLocal_70))
  {
    func_185(Global_111324, &iLocal_70, Local_983);
    CAM::SET_CAM_FOV(iLocal_70, fLocal_76);
    CAM::SET_CAM_NEAR_CLIP(iLocal_70, 0.01f);
    CAM::_0xA2767257A320FC82(iLocal_70, true);
    CAM::_0x469F2ECDEC046337(true);
  }
}