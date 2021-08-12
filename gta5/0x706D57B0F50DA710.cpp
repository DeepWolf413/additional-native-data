// agency_heist3a.ysc @ L121466
int func_845()
{
  if (func_853())
  {
    iLocal_57 = 23;
    return 1;
  }
  func_840();
  func_852();
  func_851();
  func_850();
  func_849();
  func_848();
  func_145();
  func_842();
  func_846();
  func_137();
  func_134();
  func_734();
  if (!func_831("AH3A_EXIT"))
  {
    if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 115.022f, -759.32f, 44.757f, 117.679f, -751.774f, 46.7f, 2f, false, true, 0))
    {
      AUDIO::TRIGGER_MUSIC_EVENT("AH3A_EXIT");
      func_833("AH3A_EXIT", 1);
    }
  }
  return 0;
}