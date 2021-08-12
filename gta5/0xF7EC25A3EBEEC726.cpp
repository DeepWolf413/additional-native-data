// am_joyrider.ysc @ L485
int func_12()
{
  struct<3> Var0;
  float fVar3;
  
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_61.f_2))
  {
    if (func_34(Local_61.f_4))
    {
      if (func_16(&Var0, &fVar3))
      {
        if (func_13(&(Local_61.f_2), Local_61.f_4, Var0, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
        {
          VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_61.f_2), true, true, false);
          VEHICLE::SET_VEHICLE_IS_WANTED(NETWORK::NET_TO_VEH(Local_61.f_2), true);
          VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(Local_61.f_2), true);
          AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_61.f_2), "JOYRIDER_GROUP", 0f);
          STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_61.f_4);
        }
      }
    }
  }
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_61.f_2))
  {
    return 0;
  }
  return 1;
}