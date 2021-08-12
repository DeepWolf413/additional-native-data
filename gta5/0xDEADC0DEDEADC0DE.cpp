// fm_mission_controller_2020.ysc @ L378047
void func_6003(var uParam0)
{
  if (MISC::IS_BIT_SET(Global_4718592.f_70989[uParam0->f_9 /*392*/].f_101, 28))
  {
    GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(NETWORK::NET_TO_OBJ(Local_39493.f_839.f_118[uParam0->f_9]));
    if (!MISC::IS_BIT_SET(Global_4718592.f_70989[uParam0->f_9 /*392*/].f_101, 31))
    {
      if (uParam0->f_3)
      {
        AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "EMP_Vehicle_Hum", uParam0->f_11, "DLC_HEIST_BIOLAB_DELIVER_EMP_SOUNDS", false, 0);
        MISC::SET_BIT(&(Global_4718592.f_70989[uParam0->f_9 /*392*/].f_101), 31);
      }
    }
  }
}