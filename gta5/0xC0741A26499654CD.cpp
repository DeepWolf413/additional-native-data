// epsilon7.ysc @ L91457
void func_426()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90))
  {
    if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tom_Epsilon", joaat("ig_tomepsilon"))))
    {
      iLocal_90 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tom_Epsilon", joaat("ig_tomepsilon")));
    }
  }
}