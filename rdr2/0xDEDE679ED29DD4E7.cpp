// campfire_gang.ysc @ L52048
void func_1409(int iParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7)
{
  *uParam3 = func_1484(iParam0);
  *uParam2 = func_1485(vParam4);
  *uParam1 = PHYSICS::_ADD_ROPE_2(vParam4, 0f, 0f, 0f, fParam7, 6, true, -1, -1f);
  PHYSICS::_0x462FF2A432733A44(*uParam1, *uParam2, *uParam3, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
  PHYSICS::_0x3C6490D940FF5D0B(*uParam1, 0, "ropeAttach", fParam7, 1);
  PHYSICS::_0x76BAD9D538BCA1AA(*uParam1, 0f);
  PHYSICS::_0x76BAD9D538BCA1AA(*uParam1, 1f);
  PHYSICS::_0x8D59079C37C21D78(*uParam1, 2.5f);
  PHYSICS::_0x7A54D82227A139DB(uParam1, 1);
  PHYSICS::_0x522FA3F490E2F7AC(*uParam1, 1, 1);
  PHYSICS::_0xDEDE679ED29DD4E7(*uParam1, 1);
  PHYSICS::_0xF1EA2A881EB7F2CD(*uParam1, 1);
  AUDIO::_0xF092B6030D6FD49C(*uParam1, "ROPE_SETTINGS_DEFAULT");
}