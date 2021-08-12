// rcm_war_veteran3.ysc @ L9509
bool func_313(var uParam0)
{
  vector3 vVar0;
  float fVar3;

  vVar0 = { func_218(13) };
  fVar3 = func_219(13);
  if (func_344(vLocal_296[1 /*3*/].f_2, 1))
  {
    return true;
  }
  if (func_651(uParam0, &(vLocal_296[1 /*3*/]), iLocal_228, vVar0, fVar3, 1, 0, 1065353216 /* Float: 1f */, 0))
  {
    PED::_0x9851DE7AEC10B4E1(vVar0, 5f, 1, 0);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(vLocal_296[1 /*3*/], joaat("REL_WILD_ANIMAL_PREDATOR"));
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(vLocal_296[1 /*3*/], true);
    TASK::TASK_STAND_STILL(vLocal_296[1 /*3*/], -1);
    AUDIO::SET_ANIMAL_MOOD(vLocal_296[1 /*3*/], 0);
    PED::_0xCA95C156C14B2054(vLocal_296[1 /*3*/], "mood_angry");
    PED::REQUEST_PED_VISIBILITY_TRACKING(vLocal_296[1 /*3*/]);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(vLocal_296[1 /*3*/], 1);
    ENTITY::SET_ENTITY_INVINCIBLE(vLocal_296[1 /*3*/], true);
    ENTITY::_0x18FF3110CF47115D(vLocal_296[1 /*3*/], 7, 0);
    func_323(0);
    func_308(&(vLocal_296[1 /*3*/].f_2), 1);
    return true;
  }
  return false;
}