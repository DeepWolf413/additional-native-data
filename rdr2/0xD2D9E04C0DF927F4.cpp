// cornwall1.ysc @ L57412
void func_1348()
{
  if (func_1240(Global_35, 1234.645f, -446.1728f, 92.0425f, 50f, 1, 1))
  {
    fLocal_336 = func_1569(fLocal_336, 0f, (BUILTIN::TIMESTEP() / 2f));
    GRAPHICS::DRAW_LIGHT_WITH_RANGE(1237.214f, -440.4799f, 93.5233f, 226, 88, 34, 15f, fLocal_336);
    GRAPHICS::DRAW_LIGHT_WITH_RANGE(1240.667f, -443.1338f, 93.3725f, 226, 88, 34, 10f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.3f));
    GRAPHICS::DRAW_LIGHT_WITH_RANGE(1241.365f, -434.9086f, 92.9809f, 226, 88, 34, 10f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.3f));
    GRAPHICS::DRAW_LIGHT_WITH_RANGE(1233.791f, -437.5036f, 92.8506f, 226, 88, 34, 10f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.3f));
  }
}