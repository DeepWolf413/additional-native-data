// finale1.ysc @ L62693
int func_1469()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_1641[0]))
  {
    return 1;
  }
  if (!func_2104(987516329))
  {
    return 0;
  }
  iLocal_1641[0] = VEHICLE::_CREATE_MISSION_TRAIN(987516329, 2827.225f, 476.369f, 56.8737f, false, true, true, true);
  func_2105(iLocal_1641[0], 14f);
  VEHICLE::_0x1A861F899EBBE17C(iLocal_1641[0], 1);
  return 1;
}