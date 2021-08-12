// fm_mission_controller.ysc @ L658671
void func_10905(bool bParam0)
{
  char* sVar0;
  
  if (func_546(Global_4456448.f_133963))
  {
    sVar0 = "DLC_IE_VV_General_Sounds";
  }
  else
  {
    sVar0 = "POWER_PLAY_General_Soundset";
  }
  OBJECT::SET_PICKUP_UNCOLLECTABLE(Global_4718592.f_61833[bParam0 /*150*/].f_26, 1);
  OBJECT::SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(Global_4718592.f_61833[bParam0 /*150*/].f_26, 1);
  if (MISC::IS_BIT_SET(Global_4456448.f_18, 7) && !func_546(Global_4456448.f_133963))
  {
    AUDIO::PLAY_SOUND_FROM_COORD(-1, "Powerup_Despawn", Global_4718592.f_61833[bParam0 /*150*/], sVar0, false, 0, false);
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_6273[bParam0]))
  {
    HUD::REMOVE_BLIP(&(iLocal_6273[bParam0]));
  }
  if (MISC::IS_BIT_SET(uLocal_11435[func_768(bParam0)], func_767(bParam0)))
  {
    MISC::CLEAR_BIT(&(uLocal_11435[func_768(bParam0)]), func_767(bParam0));
  }
}