// fm_bj_race_controler.ysc @ L22571
void func_422(struct<10> Param0, bool bParam10, bool bParam11, int iParam12)
{
  bool bVar0;
  
  switch (bParam10)
  {
    case 6:
      bVar0 = false;
      break;
    
    case 5:
      bVar0 = true;
      break;
    
    case 1:
      bVar0 = 2;
      break;
    
    default:
      return;
      break;
  }
  if (bParam11)
  {
    GRAPHICS::ANIMPOSTFX_PLAY("CarDamageHit", 0, false);
    if (ENTITY::DOES_ENTITY_EXIST(iParam12))
    {
      CAM::_0x5D96CFB59DA076A0(iParam12, bParam10, 1f);
    }
    AUDIO::PLAY_SOUND_FRONTEND(-1, "health_lost", "DLC_sum20_Open_Wheel_Racing_Sounds", true);
  }
  func_423(Param0, bVar0, bParam11);
}