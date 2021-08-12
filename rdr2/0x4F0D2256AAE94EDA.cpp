// industry1.ysc @ L40818
void func_917(char[4] cParam0)
{
  func_457(iLocal_1644, 1);
  func_457(1736837788, 1);
  func_458(-1232809834, 1, 0);
  if (PATHFIND::_0x495CFAB2924237C7("ind1_nav_gala"))
  {
    PATHFIND::_0x7C334FF4D9215912("ind1_nav_gala");
  }
  if (func_33(cParam0) == iLocal_121)
  {
    func_457(iLocal_1645, 1);
  }
  if (func_33(cParam0) > iLocal_122)
  {
    func_456(1);
  }
  func_460(47, 0);
  ENTITY::CREATE_MODEL_HIDE(2406.232f, -1049.587f, 42.981f, 1f, joaat("P_POT_FLOWERARNG19X"), true);
  ENTITY::CREATE_MODEL_HIDE(2403.348f, -1042.537f, 42.973f, 1f, joaat("P_CHAIRWHITE01X"), true);
  func_464(1, 1, 0);
  iLocal_364 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X"), func_431(11, 25), func_437(11, 25), 0, 0, 0);
  func_466(0);
  if (func_33(cParam0) > iLocal_122)
  {
    GRAPHICS::SET_TIMECYCLE_MODIFIER("ind1_optimize");
  }
  PLAYER::_0x4F0D2256AAE94EDA(1);
}