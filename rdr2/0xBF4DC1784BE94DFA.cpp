// guama2.ysc @ L66005
void func_1716(int* iParam0, int iParam1, bool bParam2)
{
  if (PHYSICS::DOES_ROPE_EXIST(*iParam0))
  {
    PHYSICS::DELETE_ROPE(iParam0);
  }
  if (!PHYSICS::DOES_ROPE_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    PED::_SET_PED_BLACKBOARD_HASH(iParam1, "BodyPartChained", "Legs", -1);
    PED::SET_ENABLE_BOUND_ANKLES(iParam1, true);
    *iParam0 = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -0.04f, 0f, 0.05f), 0f, 0f, 0f, 0.32f, 7, -1f, 0.3f, 0.3f, false, true, false, 1.25f, false, 0, true);
    PHYSICS::ATTACH_ENTITIES_TO_ROPE(*iParam0, iParam1, iParam1, 0.3f, 0f, 0.1f, 0.3f, 0f, -0.1f, 0.25f, 0, 0, 0, 0, 0, 55120, 43312, 0, 0, 1, 1);
    if (bParam2)
    {
      if (iParam1 == Global_35)
      {
        AUDIO::_0xBF4DC1784BE94DFA(iParam1, true, MISC::GET_HASH_KEY("fs_chaingang_player"));
      }
      else
      {
        AUDIO::_0xBF4DC1784BE94DFA(iParam1, true, MISC::GET_HASH_KEY("fs_chaingang_npc"));
      }
    }
  }
}