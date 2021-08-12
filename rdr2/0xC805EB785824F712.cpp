// beat_disabled_beggar.ysc @ L5125
void func_149()
{
  if (Local_132.f_48 == 1)
  {
    if (((func_40(uLocal_433[0], 0, 1) && func_147(Global_35, uLocal_433[0], 1, 1) < 7f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_433[0], Global_35, 1, 1)) && ENTITY::IS_ENTITY_ON_SCREEN(uLocal_433[0]))
    {
      PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
      LAW::_0x710448D44A64C213(0);
      LAW::_0xC805EB785824F712(0);
    }
    else
    {
      PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
      LAW::_0x710448D44A64C213(1);
      LAW::_0xC805EB785824F712(1);
    }
  }
}