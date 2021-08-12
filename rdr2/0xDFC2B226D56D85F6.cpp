// grays1.ysc @ L75590
void func_1862()
{
  if ((((ENTITY::_0xDFC2B226D56D85F6(iLocal_662[0], iLocal_609[0]) > 500f && ENTITY::GET_ENTITY_SPEED(iLocal_662[0]) > 0.55f) && ENTITY::GET_ENTITY_SPEED(iLocal_609[0]) < 0.55f) && !func_26(&(vLocal_619[5 /*3*/]))) && !PED::IS_PED_RAGDOLL(iLocal_609[0]))
  {
    func_2320(iLocal_609[0], 4000, 5000, 0, 0);
  }
  if ((((ENTITY::_0xDFC2B226D56D85F6(iLocal_662[0], iLocal_609[1]) > 500f && ENTITY::GET_ENTITY_SPEED(iLocal_662[0]) > 0.55f) && ENTITY::GET_ENTITY_SPEED(iLocal_609[1]) < 0.55f) && !func_26(&(vLocal_619[5 /*3*/]))) && !PED::IS_PED_RAGDOLL(iLocal_609[1]))
  {
    func_2320(iLocal_609[1], 4000, 5000, 0, 0);
  }
}