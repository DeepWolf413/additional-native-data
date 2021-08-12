// train_robbery1.ysc @ L57861
void func_1300(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[0]))
  {
    iLocal_122[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_33, 2851f, 1425f, 59f, true, true, false, true);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[1]))
  {
    iLocal_122[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_33, 2851f, 1425f, 59f, true, true, false, true);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[2]))
  {
    iLocal_122[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_33, 2851f, 1425f, 59f, true, true, false, true);
  }
  ENTITY::SET_ENTITY_COLLISION(iLocal_122[0], false, false);
  ENTITY::SET_ENTITY_COLLISION(iLocal_122[1], false, false);
  ENTITY::SET_ENTITY_COLLISION(iLocal_122[2], false, false);
  ENTITY::_0xA9E6D8F2DDFC4DB9(iLocal_122[0], 1);
  ENTITY::_0xA9E6D8F2DDFC4DB9(iLocal_122[1], 1);
  ENTITY::_0xA9E6D8F2DDFC4DB9(iLocal_122[2], 1);
  func_420(uParam0, iLocal_122[0], "p_cs_horseHarness01x", 0, 0, 0, 0);
  func_420(uParam0, iLocal_122[1], "p_cs_horseHarness01x^1", 0, 0, 0, 0);
  func_420(uParam0, iLocal_122[2], "p_cs_horseHarness01x^2", 0, 0, 0, 0);
}