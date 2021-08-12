// beat_animal_attack.ysc @ L4977
void func_145(var uParam0, var uParam1, int iParam2, int* iParam3)
{
  if (!func_276(iParam2))
  {
    return;
  }
  if (*uParam1)
  {
    return;
  }
  if (func_349())
  {
    func_350(1);
  }
  func_351(iParam2, uParam0->f_43);
  func_352(iParam2, 0, 0, 0, 0);
  if (func_353(iParam2) != -1)
  {
    MISC::_SET_WEATHER_TYPE_FROZEN(true);
  }
  AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
  MISC::_0x1096603B519C905F(func_277(uParam0->f_3));
  if (MAP::DOES_BLIP_EXIST(*iParam3))
  {
    MAP::REMOVE_BLIP(iParam3);
  }
  func_354(uParam0, 1, 0);
  *uParam1 = 1;
}