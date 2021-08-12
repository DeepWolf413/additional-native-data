// gang2.ysc @ L35084
int func_756(var uParam0)
{
  if (MAP::DOES_BLIP_EXIST(Local_869[0 /*6*/].f_3))
  {
    MAP::REMOVE_BLIP(&(Local_869[0 /*6*/].f_3));
  }
  if (MAP::DOES_BLIP_EXIST(Local_869[1 /*6*/].f_3))
  {
    MAP::REMOVE_BLIP(&(Local_869[1 /*6*/].f_3));
  }
  if (MAP::DOES_BLIP_EXIST(Local_869[2 /*6*/].f_3))
  {
    MAP::REMOVE_BLIP(&(Local_869[2 /*6*/].f_3));
  }
  if (MAP::DOES_BLIP_EXIST(iLocal_384[0]))
  {
    MAP::REMOVE_BLIP(&(iLocal_384[0]));
  }
  VEHICLE::_0x7C9E45A4CED2E8DA(iLocal_378[1], 1f);
  func_1318();
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("GANG2_scenes_scripted_balloon_hover"))
  {
    AUDIO::STOP_AUDIO_SCENE("GANG2_scenes_scripted_balloon_hover");
  }
  func_173();
  return 1;
}