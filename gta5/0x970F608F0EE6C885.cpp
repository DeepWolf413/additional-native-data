// am_mp_car_meet_property.ysc @ L326739
void func_5224(bool bParam0)
{
  struct<3> Var0;
  
  Var0 = { func_166(PLAYER::PLAYER_ID()) };
  func_5221(&(Local_1315.f_1478.f_3), -2208.595f, 1134.138f, -24.2549f, 792, "RO_BLIP", 1f, 1, !bParam0);
  func_5221(&(Local_1315.f_1547), -2145.534f, 1118.584f, -23.7103f, 782, "TESTCARS_BLIP", 1f, 1, !bParam0);
  func_5221(&(Local_1315.f_1548), -2163.247f, 1073.873f, -25.3537f, 75, "BLIP_75", 1f, 1, !bParam0);
  func_5221(&(Local_1315.f_1549), -2142.279f, 1160.726f, -25.372f, 778, "CAR_TEST_BLIP", 1f, 1, 0);
  func_5221(&(Local_1315.f_1550), -2141.999f, 1071.092f, -25.3638f, 778, "CAR_TEST_BLIP", 1f, 1, 0);
  func_5221(&(Local_1315.f_1551), -2161.991f, 1155.639f, -25.3718f, 72, "CAR_M_MODSH", 1f, 1, !bParam0);
  func_5221(&(Local_1315.f_1552), -2195.326f, 1104.198f, -23.2451f, 73, "S_CL_10", 1f, 1, 0);
  func_5221(&(Local_1315.f_1515.f_3), -2175.296f, 1108.365f, -25.365f, 787, "CMM_BP_MIMI", 1f, bParam0, 0);
  func_5227(bParam0, Var0, 0);
  if (func_1839("CAR_MEET_MEM_B0") && HUD::DOES_BLIP_EXIST(Local_1315.f_1478.f_3))
  {
    if (HUD::GET_BLIP_ALPHA(Local_1315.f_1478.f_3) != 255)
    {
      HUD::SET_BLIP_ALPHA(Local_1315.f_1478.f_3, 255);
    }
  }
  if (func_5226(bParam0))
  {
    func_5225(&(Local_1315.f_1478.f_3), -2208.595f, 1134.138f, -24.2549f, Var0, 1);
    func_5225(&(Local_1315.f_1548), -2163.247f, 1073.873f, -25.3537f, Var0, 2);
    func_5225(&(Local_1315.f_1549), -2142.279f, 1160.726f, -25.372f, Var0, 3);
    func_5225(&(Local_1315.f_1550), -2141.999f, 1071.092f, -25.3638f, Var0, 4);
    func_5225(&(Local_1315.f_1552), -2195.326f, 1104.198f, -23.2451f, Var0, 5);
  }
}