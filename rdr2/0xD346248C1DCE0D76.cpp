// train_robbery4_intro.ysc @ L3880
void func_161()
{
  if (!bLocal_19)
  {
    if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uLocal_20[0], true, false), true) < 15f)
    {
      STREAMING::PREFETCH_SRL("script@story@tr4@trn4_int_to_dynamite_cme");
      STREAMING::_0xAE00387E53B1E9FC();
      STREAMING::SET_MAPDATACULLBOX_ENABLED("Beaver Hollow", false);
      STREAMING::_0xD346248C1DCE0D76(3, 3, 14, 14);
      bLocal_19 = true;
    }
  }
  else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uLocal_20[0], true, false), true) > 20f)
  {
    STREAMING::END_SRL();
    bLocal_19 = false;
  }
}