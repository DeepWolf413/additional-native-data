// guama2.ysc @ L65991
void func_1715(int* iParam0, int iParam1, int iParam2)
{
  if (PHYSICS::DOES_ROPE_EXIST(*iParam0))
  {
    PHYSICS::DELETE_ROPE(iParam0);
  }
  if ((!PHYSICS::DOES_ROPE_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam2))
  {
    *iParam0 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, 0.8f, 7, true, 32, -1f);
    PHYSICS::ATTACH_ENTITIES_TO_ROPE(*iParam0, iParam1, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 1.5f, 0, 0, "PH_FrontChain", "PH_BackChain", 0, -1, -1, 0, 0, 1, 1);
    PHYSICS::_0x1D97DA8ACB5D2582(*iParam0, 30);
  }
}