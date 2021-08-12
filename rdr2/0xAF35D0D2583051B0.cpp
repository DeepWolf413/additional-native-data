// abigail2_1.ysc @ L49943
void func_1273(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_159[0]))
  {
    iLocal_159[0] = VEHICLE::CREATE_VEHICLE(joaat("CART06"), -2561.9f, 400.47f, 148.14f, 0.08f, true, true, false, false);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_159[1]))
  {
    iLocal_159[1] = VEHICLE::CREATE_VEHICLE(joaat("WAGON05X"), -2589.22f, 382.42f, 148.42f, 0.08f, true, true, false, false);
  }
  func_1215(uParam0, 6, 1);
  func_1240(uParam0, 5);
  func_1240(uParam0, 6);
  func_1240(uParam0, 7);
  func_1240(uParam0, 8);
  func_1240(uParam0, 9);
  func_1240(uParam0, 10);
  func_1240(uParam0, 11);
  func_1240(uParam0, 8);
  func_1240(uParam0, 9);
  func_1240(uParam0, 10);
  func_1240(uParam0, 11);
  func_1240(uParam0, 13);
  func_1240(uParam0, 14);
  func_1240(uParam0, 15);
  func_1240(uParam0, 16);
  func_411(uParam0, iLocal_159[0], "CART06", 0, 0, 0, 0);
  func_411(uParam0, iLocal_159[1], "WAGON05X", 0, 0, 0, 0);
}