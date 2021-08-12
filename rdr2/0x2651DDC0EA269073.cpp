// treasure_hunter.ysc @ L3256
bool func_101(var uParam0)
{
  if ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_11)) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
  {
    return false;
  }
  if (!(ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_12) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_11)))
  {
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_12, 1);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_11, 1);
    return false;
  }
  OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_12);
  ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_12, uParam0->f_4, -1, PED::GET_PED_BONE_INDEX(uParam0->f_4, 33646), 0.02f, -0.11f, 0f, 0f, 0f, 0f, 183f, 88.5f, 97f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
  uParam0->f_14 = PHYSICS::_ADD_ROPE_2(func_201(), 0f, 0f, 0f, 7f, 6, false, -1, -1f);
  PHYSICS::_0xBB3E9B073E66C3C9(uParam0->f_14, 1, 0, 1, 0);
  PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_14, 1, 1);
  PHYSICS::_0x462FF2A432733A44(uParam0->f_14, uParam0->f_11, uParam0->f_12, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
  PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_14, 0, 0, 7f, 0);
  PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_14, 0f);
  PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_14, 1f);
  PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_14, 1);
  PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_14, 1);
  AUDIO::_0xF092B6030D6FD49C(uParam0->f_14, "ROPE_SETTINGS_DEFAULT");
  AUDIO::_0x2651DDC0EA269073(uParam0->f_14, 1f);
  return true;
}