// gang2.ysc @ L35327
int func_763(var uParam0)
{
  func_1332();
  if (iLocal_791 == 6)
  {
    CAM::_0xA54D643D0773EB65("script@Story@GNG2@balloon_to_annesburg", "3_ARRAVING", 5);
    AUDIO::_0x43037ABFE214A851();
    func_60(0);
  }
  func_1272(uParam0, 8192);
  ENTITY::DETACH_ENTITY(iLocal_315[3], true, false);
  if (func_172(iLocal_315[2], 0))
  {
    func_805(2);
    ENTITY::SET_ENTITY_COORDS(iLocal_315[2], 3017.68f, 1442.54f, 45.54f, true, false, true, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_315[2], 1);
  }
  return 1;
}