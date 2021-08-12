// director_mode.ysc @ L147593
void func_1152()
{
  float fVar0;
  float fVar1;
  float fVar2;
  var uVar3;
  struct<3> Var6;
  char cVar9[16];
  
  if (!CAM::_0x5C48A1D6E3B33179(iLocal_11647))
  {
    fVar0 = func_823(Local_11521.f_6, Local_11521.f_6.f_1);
    fVar1 = PAD::GET_CONTROL_NORMAL(2, 220);
    fVar2 = PAD::GET_CONTROL_NORMAL(2, 221);
    if (fVar1 != 0f)
    {
      fLocal_11653 = (((fLocal_11653 - (fVar1 * fLocal_11658)) + 360f) % 360f);
    }
    MISC::GET_MODEL_DIMENSIONS(Local_11521.f_10, &Var6, &uVar3);
    fLocal_11654 = func_25((fLocal_11654 - (fVar2 * fLocal_11658)), Var6.f_2, fLocal_11656);
    StringCopy(&cVar9, "Min Z ", 16);
    StringIntConCat(&cVar9, SYSTEM::ROUND((Var6.f_2 * 10f)), 16);
    GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar9, 0.1f, 0.3f, 0f, 0, 0, 255, 255);
    fLocal_11655 = (fVar0 + (fLocal_11537 * fLocal_11658));
  }
}