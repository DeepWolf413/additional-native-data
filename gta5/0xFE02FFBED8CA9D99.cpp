// am_mp_vehicle_weapon.ysc @ L5623
void func_198(bool bParam0)
{
  int iVar0;
  
  Local_121.f_33 = 100;
  Local_121.f_59 = 50f;
  Local_121.f_62 = unk_0x67D02A194A2FC2BD(func_38());
  AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", false, -1);
  GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
  GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("droneHUD", false);
  Local_121.f_29 = AUDIO::GET_SOUND_ID();
  Local_121.f_30 = AUDIO::GET_SOUND_ID();
  func_112(0);
  iVar0 = 0;
  while (iVar0 <= 5)
  {
    Local_121.f_34[iVar0] = -1;
    Local_121.f_41[iVar0] = -1;
    iVar0++;
  }
  if (bParam0)
  {
  }
}