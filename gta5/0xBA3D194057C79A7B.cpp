// fm_mission_controller.ysc @ L690914
void func_11501(int iParam0)
{
  char* sVar0;
  
  GRAPHICS::_0xBA3D194057C79A7B("scr_adversary_foot_flames");
  if (iParam0 == 0)
  {
    if (!MISC::IS_BIT_SET(bLocal_14852, 2))
    {
      PED::SET_PED_CONFIG_FLAG(iLocal_3286, 421, true);
      MISC::SET_BIT(&bLocal_14852, 2);
    }
    if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_50111[NETWORK::PARTICIPANT_ID_TO_INT()]))
    {
      sVar0 = "scr_adversary_ped_light_bad";
      if (MISC::IS_BIT_SET(Global_4456448.f_25, 31))
      {
        sVar0 = "scr_sm_con_ped_light";
        GRAPHICS::USE_PARTICLE_FX_ASSET("scr_sm");
      }
      else
      {
        GRAPHICS::USE_PARTICLE_FX_ASSET("scr_bike_adversary");
      }
      iLocal_50111[NETWORK::PARTICIPANT_ID_TO_INT()] = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(sVar0, iLocal_3286, 0f, 0f, 0f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(iLocal_3286, 0), 1f, false, false, false, 1065353216, 1065353216, 1065353216, 0);
    }
  }
}