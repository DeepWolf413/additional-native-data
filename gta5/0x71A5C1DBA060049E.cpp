// maintransition.ysc @ L131632
void func_1310(var uParam0)
{
  struct<29> Var0;
  struct<2> Var31;
  float fVar34;
  float fVar35;
  
  func_1271(&Var0, 12);
  fVar34 = (100f - func_1312(uParam0, 0));
  func_1311(uParam0, 12, -1, fVar34, fVar34);
  func_1270(uParam0, &Var31, 12);
  fVar35 = func_1269(Var31.f_1, Var0.f_27, Var0.f_28);
  PED::_SET_PED_FACE_FEATURE(uParam0->f_42[0], Var0.f_24, fVar35);
}